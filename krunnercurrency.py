#!/usr/bin/python3

import dbus.service
from dbus.mainloop.glib import DBusGMainLoop
from gi.repository import GLib
from locale import atof, setlocale, LC_ALL

from currencyconverter import CurrencyConverter
import clipboard

DBusGMainLoop(set_as_default=True)

objpath = "/krunnercurrency"
bus_name = 'org.kde.krunnercurrency'
iface = "org.kde.krunner1"

method_description = ('Currency Converter', 'Convert Currencies', '')
cc = CurrencyConverter()

setlocale(LC_ALL, 'en_US.UTF-8')

def set_clipbaord(data: str):
    if len(data) > 0:
        amount = str(atof(data.split()[0]))
        clipboard.put(amount)

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

