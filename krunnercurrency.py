#!/usr/bin/python3

import json
from os import path, makedirs
from pathlib import Path
import random
import re
import requests
from datetime import datetime

import clipboard
import dbus.service
from dbus.mainloop.glib import DBusGMainLoop
from gi.repository import GLib
from xdg import xdg_cache_home

class CurrencyConverter():

    USD_BASE_FILE = 'usd.json'
    CURRENCIES_FILE = 'currencies.json'

    currencies = dict()
    currencies_base = dict()

    fetch_date = datetime(year=1, month=1, day=1)

    is_sane = False
    last_error = ''

    _favorite = ['bhd', 'usd', 'eur', 'jpy']
    _other_currencies = []

    _cache_directory = Path()
    _base_file = Path()
    _name_file = Path()


    def is_cache_dir_ok(self) -> bool:
        self._cache_directory = xdg_cache_home() / 'krunner/currency'

        if path.isdir(self._cache_directory):
            return True

        if path.exists(self._cache_directory):
            self.last_error = 'Cache directory is used by something else'
            return False

        try:
            makedirs(self._cache_directory, exist_ok=True)
        except Exception as e:
            self.last_error = str(e)
            return False

        return True


    def load_cache(self):

        self._base_file = self._cache_directory / self.USD_BASE_FILE # BASED
        self._name_file = self._cache_directory / self.CURRENCIES_FILE

        if not path.isfile(self._base_file) or not path.isfile(self._name_file):
            self.last_error = 'filaed to find files'
            return

        with open(self._base_file) as f:
            d = json.load(f)
            self.fetch_date = datetime.strptime(d['date'],"%Y-%m-%d")
            self.currencies_base = dict(d['usd'])

        with open(self._name_file) as f:
            d = json.load(f)
            self.currencies = dict(d)

        self.is_sane = self.sanity_check()

        self._other_currencies = [x for x in list(self.currencies.keys()) if x not in self._favorite]


    def fetch_rates(self):
        usd_base_json_url = ('https://cdn.jsdelivr.net/npm/@fawazahmed0/currency-api@latest/v1/currencies/usd.json', self._base_file)
        currencies_json_url = ('https://cdn.jsdelivr.net/npm/@fawazahmed0/currency-api@latest/v1/currencies.json', self._name_file)

        for (url, name) in [usd_base_json_url, currencies_json_url]:
            r = requests.get(url)

            if (r.status_code != 200):
                continue

            with open(name, 'w') as f:
                f.write(r.text)


    def load_rates(self):

        is_ok = self.is_cache_dir_ok()

        if not is_ok:
            return

        self.load_cache()

        if self.need_refresh():
            self.fetch_rates()
            self.load_cache()


    def __init__(self):
        self.load_rates()


    def need_refresh(self) -> bool:
        now = datetime.now()
        dayDiff = (now - self.fetch_date).days

        return dayDiff > 0

    def sanity_check(self) -> bool:
        return ('usd' in self.currencies) and ('eur' in self.currencies_base)

    def match(self, query: str):

        if not self.is_sane:
            return []

        matches = re.findall(r'(\d+)\s*([A-z]+)?\s*(?:to|2)?\s*(\w+)?', str.lower(query))

        if len(matches) == 0:
            return []

        (amount, currency_in, currency_out) = matches[0]

        if (len(currency_in) != 0 and currency_in not in self.currencies) or (len(currency_out) != 0 and currency_out not in self.currencies):
            return []

        if (len(currency_in) == 0):
            currency_in = 'usd'

        amount = float(amount)
        base_amount = amount / self.currencies_base[currency_in]

        res = []

        if len(currency_out) == 0:

            for i in self._favorite:
                if i != currency_in:
                    res.append(self.make_entry(base_amount, i))

            random_pick = random.choice(self._other_currencies)
            if random_pick not in currency_in:
                    res.append(self.make_entry(base_amount, random_pick))

        else:
            res.append(self.make_entry(base_amount, currency_out, use_symobl=False))

        return res


    def make_entry(self, base_amount: float, currency: str, use_symobl: bool = True):
        amount = str(round(base_amount * self.currencies_base[currency], 9))

        if use_symobl:
            amount += ' ' + str.upper(currency)

        # data, text, icon, type (Plasma::QueryType), relevance (0-1), properties (subtext, category and urls)
        return (amount, amount, 'view-currency-list', 100, 1.0, {'subtext': self.currencies[currency]})


# def Main():
#     CurrencyConverter().match('')
#     CurrencyConverter().match('12')
#     CurrencyConverter().match('150 usd to bhd')
#     CurrencyConverter().match('123usd tobhd')
#     CurrencyConverter().match('123 sar2bhd')
#     CurrencyConverter().match('123usdtobhd') # this fails
#     CurrencyConverter().match('123 usd twt')
#     CurrencyConverter().match('123usd bhd')
#     CurrencyConverter().match('123usd')
#     CurrencyConverter().match('123 usd')

    # print(xdg_cache_home())

# if __name__ == "__main__":
#     Main()

DBusGMainLoop(set_as_default=True)

objpath = "/krunnercurrency"
bus_name = 'org.kde.krunnercurrency'
iface = "org.kde.krunner1"

method_description = ('Currency Converter', 'Convert Currencies', '')
cc = CurrencyConverter()

def set_clipbaord(data: str):
    if len(data) > 0:
        clipboard.put(data.split()[0])

class Runner(dbus.service.Object):
    def __init__(self):
        dbus.service.Object.__init__(self, dbus.service.BusName(bus_name, dbus.SessionBus()), objpath)

    @dbus.service.method(iface, in_signature='s', out_signature='a(sssida{sv})')
    def Match(self, query: str):
        """This method is used to get the matches and it returns a list of tupels"""
        return cc.match(query)

    @dbus.service.method(iface, out_signature='a(sss)')
    def Actions(self):
        # id, text, icon
        return [method_description]

    @dbus.service.method(iface, in_signature='ss')
    def Run(self, data: str, action_id: str):
        set_clipbaord(data)


runner = Runner()
loop = GLib.MainLoop()
loop.run()

