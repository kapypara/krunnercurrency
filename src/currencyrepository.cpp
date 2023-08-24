#include "currencyrepository.h"
#include <QStringLiteral>

QMap<QString, QString> CurrencyRepository::currencies{
    {QStringLiteral("00"), QStringLiteral("00 Token")},
    {QStringLiteral("1inch"), QStringLiteral("1inch")},
    {QStringLiteral("aave"), QStringLiteral("Aave")},
    {QStringLiteral("abt"), QStringLiteral("Arcblock")},
    {QStringLiteral("ach"), QStringLiteral("Alchemy Pay")},
    {QStringLiteral("acs"), QStringLiteral("ACryptoS")},
    {QStringLiteral("ada"), QStringLiteral("Cardano")},
    {QStringLiteral("aed"), QStringLiteral("Emirati Dirham")},
    {QStringLiteral("aergo"), QStringLiteral("Aergo")},
    {QStringLiteral("afn"), QStringLiteral("Afghan Afghani")},
    {QStringLiteral("agld"), QStringLiteral("Adventure Gold")},
    {QStringLiteral("aioz"), QStringLiteral("Aioz Network")},
    {QStringLiteral("alcx"), QStringLiteral("Alchemix")},
    {QStringLiteral("aleph"), QStringLiteral("Aleph.im")},
    {QStringLiteral("algo"), QStringLiteral("Algorand")},
    {QStringLiteral("alice"), QStringLiteral("My Neighbor Alice")},
    {QStringLiteral("all"), QStringLiteral("Albanian Lek")},
    {QStringLiteral("amd"), QStringLiteral("Armenian Dram")},
    {QStringLiteral("amp"), QStringLiteral("Amp")},
    {QStringLiteral("ang"), QStringLiteral("Dutch Guilder")},
    {QStringLiteral("ankr"), QStringLiteral("Ankr Network")},
    {QStringLiteral("ant"), QStringLiteral("Aragon")},
    {QStringLiteral("aoa"), QStringLiteral("Angolan Kwanza")},
    {QStringLiteral("ape"), QStringLiteral("ApeCoin")},
    {QStringLiteral("api3"), QStringLiteral("API3")},
    {QStringLiteral("apt"), QStringLiteral("Aptos")},
    {QStringLiteral("ar"), QStringLiteral("Arweave")},
    {QStringLiteral("arb"), QStringLiteral("Arbitrum")},
    {QStringLiteral("arpa"), QStringLiteral("ARPA Chain")},
    {QStringLiteral("ars"), QStringLiteral("Argentine Peso")},
    {QStringLiteral("asm"), QStringLiteral("Assemble Protocol")},
    {QStringLiteral("ast"), QStringLiteral("AirSwap")},
    {QStringLiteral("ata"), QStringLiteral("Automata Network")},
    {QStringLiteral("atom"), QStringLiteral("Cosmos")},
    {QStringLiteral("ats"), QStringLiteral("Austrian Schilling")},
    {QStringLiteral("auction"), QStringLiteral("Bounce Token AUCTION")},
    {QStringLiteral("aud"), QStringLiteral("Australian Dollar")},
    {QStringLiteral("audio"), QStringLiteral("Audius")},
    {QStringLiteral("aurora"), QStringLiteral("Aurora")},
    {QStringLiteral("avax"), QStringLiteral("Avalanche")},
    {QStringLiteral("avt"), QStringLiteral("Aventus")},
    {QStringLiteral("awg"), QStringLiteral("Aruban or Dutch Guilder")},
    {QStringLiteral("axl"), QStringLiteral("Axelar")},
    {QStringLiteral("axs"), QStringLiteral("Axie Infinity")},
    {QStringLiteral("azm"), QStringLiteral("Azerbaijani Manat")},
    {QStringLiteral("azn"), QStringLiteral("Azerbaijan Manat")},
    {QStringLiteral("badger"), QStringLiteral("Badger DAO")},
    {QStringLiteral("bake"), QStringLiteral("BakeryToken")},
    {QStringLiteral("bal"), QStringLiteral("Balancer")},
    {QStringLiteral("bam"), QStringLiteral("Bosnian Convertible Mark")},
    {QStringLiteral("band"), QStringLiteral("Band Protocol")},
    {QStringLiteral("bat"), QStringLiteral("Basic Attention Token")},
    {QStringLiteral("bbd"), QStringLiteral("Barbadian or Bajan Dollar")},
    {QStringLiteral("bch"), QStringLiteral("Bitcoin Cash")},
    {QStringLiteral("bdt"), QStringLiteral("Bangladeshi Taka")},
    {QStringLiteral("bef"), QStringLiteral("Belgian Franc")},
    {QStringLiteral("bgn"), QStringLiteral("Bulgarian Lev")},
    {QStringLiteral("bhd"), QStringLiteral("Bahraini Dinar")},
    {QStringLiteral("bico"), QStringLiteral("Biconomy")},
    {QStringLiteral("bif"), QStringLiteral("Burundian Franc")},
    {QStringLiteral("bit"), QStringLiteral("BitDAO")},
    {QStringLiteral("blur"), QStringLiteral("Blur")},
    {QStringLiteral("blz"), QStringLiteral("Bluzelle")},
    {QStringLiteral("bmd"), QStringLiteral("Bermudian Dollar")},
    {QStringLiteral("bnb"), QStringLiteral("Binance Coin")},
    {QStringLiteral("bnd"), QStringLiteral("Bruneian Dollar")},
    {QStringLiteral("bnt"), QStringLiteral("Bancor Network")},
    {QStringLiteral("bob"), QStringLiteral("Bolivian Bolíviano")},
    {QStringLiteral("boba"), QStringLiteral("Boba Network")},
    {QStringLiteral("bond"), QStringLiteral("BarnBridge")},
    {QStringLiteral("brl"), QStringLiteral("Brazilian Real")},
    {QStringLiteral("bsd"), QStringLiteral("Bahamian Dollar")},
    {QStringLiteral("bsv"), QStringLiteral("Bitcoin SV")},
    {QStringLiteral("bsw"), QStringLiteral("Biswap")},
    {QStringLiteral("btc"), QStringLiteral("Bitcoin")},
    {QStringLiteral("btcb"), QStringLiteral("Bitcoin BEP2")},
    {QStringLiteral("btg"), QStringLiteral("Bitcoin Gold")},
    {QStringLiteral("btn"), QStringLiteral("Bhutanese Ngultrum")},
    {QStringLiteral("btrst"), QStringLiteral("Braintrust")},
    {QStringLiteral("busd"), QStringLiteral("Binance USD")},
    {QStringLiteral("bwp"), QStringLiteral("Botswana Pula")},
    {QStringLiteral("byn"), QStringLiteral("Belarusian Ruble")},
    {QStringLiteral("byr"), QStringLiteral("Belarusian Ruble")},
    {QStringLiteral("bzd"), QStringLiteral("Belizean Dollar")},
    {QStringLiteral("c98"), QStringLiteral("Coin98")},
    {QStringLiteral("cad"), QStringLiteral("Canadian Dollar")},
    {QStringLiteral("cake"), QStringLiteral("PancakeSwap")},
    {QStringLiteral("cbeth"), QStringLiteral("Coinbase Wrapped Staked ETH")},
    {QStringLiteral("cdf"), QStringLiteral("Congolese Franc")},
    {QStringLiteral("celo"), QStringLiteral("Celo")},
    {QStringLiteral("celr"), QStringLiteral("Celer Network")},
    {QStringLiteral("cgld"), QStringLiteral("Celo Gold")},
    {QStringLiteral("chf"), QStringLiteral("Swiss Franc")},
    {QStringLiteral("chz"), QStringLiteral("Chiliz")},
    {QStringLiteral("clp"), QStringLiteral("Chilean Peso")},
    {QStringLiteral("clv"), QStringLiteral("Clover Finance")},
    {QStringLiteral("cnh"), QStringLiteral("Chinese Yuan Renminbi Offshore")},
    {QStringLiteral("cny"), QStringLiteral("Chinese Yuan Renminbi")},
    {QStringLiteral("comp"), QStringLiteral("Compound")},
    {QStringLiteral("cop"), QStringLiteral("Colombian Peso")},
    {QStringLiteral("coti"), QStringLiteral("COTI")},
    {QStringLiteral("coval"), QStringLiteral("COVAL")},
    {QStringLiteral("crc"), QStringLiteral("Costa Rican Colon")},
    {QStringLiteral("cro"), QStringLiteral("Crypto.com Chain")},
    {QStringLiteral("crpt"), QStringLiteral("Crypterium")},
    {QStringLiteral("crv"), QStringLiteral("Curve DAO Token")},
    {QStringLiteral("ctsi"), QStringLiteral("Cartesi")},
    {QStringLiteral("ctx"), QStringLiteral("Cryptex Finance")},
    {QStringLiteral("cuc"), QStringLiteral("Cuban Convertible Peso")},
    {QStringLiteral("cup"), QStringLiteral("Cuban Peso")},
    {QStringLiteral("cvc"), QStringLiteral("Civic")},
    {QStringLiteral("cve"), QStringLiteral("Cape Verdean Escudo")},
    {QStringLiteral("cvx"), QStringLiteral("Convex Finance")},
    {QStringLiteral("cyp"), QStringLiteral("Cypriot Pound")},
    {QStringLiteral("czk"), QStringLiteral("Czech Koruna")},
    {QStringLiteral("dai"), QStringLiteral("DAI")},
    {QStringLiteral("dar"), QStringLiteral("Mines of Dalarnia")},
    {QStringLiteral("dash"), QStringLiteral("Digital Cash")},
    {QStringLiteral("dcr"), QStringLiteral("Decred")},
    {QStringLiteral("ddx"), QStringLiteral("DerivaDAO")},
    {QStringLiteral("dem"), QStringLiteral("German Deutsche Mark")},
    {QStringLiteral("deso"), QStringLiteral("Decentralized Social")},
    {QStringLiteral("dext"), QStringLiteral("DEXTools")},
    {QStringLiteral("dfi"), QStringLiteral("DfiStarter")},
    {QStringLiteral("dia"), QStringLiteral("Dia")},
    {QStringLiteral("dimo"), QStringLiteral("DIMO")},
    {QStringLiteral("djf"), QStringLiteral("Djiboutian Franc")},
    {QStringLiteral("dkk"), QStringLiteral("Danish Krone")},
    {QStringLiteral("dnt"), QStringLiteral("District0x")},
    {QStringLiteral("doge"), QStringLiteral("Dogecoin")},
    {QStringLiteral("dop"), QStringLiteral("Dominican Peso")},
    {QStringLiteral("dot"), QStringLiteral("Polkadot")},
    {QStringLiteral("drep"), QStringLiteral("Drep [new]")},
    {QStringLiteral("dyp"), QStringLiteral("DeFi Yield Protocol")},
    {QStringLiteral("dzd"), QStringLiteral("Algerian Dinar")},
    {QStringLiteral("eek"), QStringLiteral("Estonian Kroon")},
    {QStringLiteral("egld"), QStringLiteral("Elrond")},
    {QStringLiteral("egp"), QStringLiteral("Egyptian Pound")},
    {QStringLiteral("ela"), QStringLiteral("Elastos")},
    {QStringLiteral("enj"), QStringLiteral("Enjin Coin")},
    {QStringLiteral("ens"), QStringLiteral("Ethereum Name Service")},
    {QStringLiteral("eos"), QStringLiteral("EOS")},
    {QStringLiteral("ern"), QStringLiteral("Eritrean Nakfa")},
    {QStringLiteral("esp"), QStringLiteral("Spanish Peseta")},
    {QStringLiteral("etb"), QStringLiteral("Ethiopian Birr")},
    {QStringLiteral("etc"), QStringLiteral("Ethereum Classic")},
    {QStringLiteral("eth"), QStringLiteral("Ethereum")},
    {QStringLiteral("eth2"), QStringLiteral("Ethereum 2.0")},
    {QStringLiteral("eur"), QStringLiteral("Euro")},
    {QStringLiteral("euroc"), QStringLiteral("Euro Coin")},
    {QStringLiteral("farm"), QStringLiteral("Harvest Finance")},
    {QStringLiteral("fei"), QStringLiteral("Fei USD")},
    {QStringLiteral("fet"), QStringLiteral("Fetch.ai")},
    {QStringLiteral("fida"), QStringLiteral("Bonfida")},
    {QStringLiteral("fil"), QStringLiteral("Filecoin")},
    {QStringLiteral("fim"), QStringLiteral("Finnish Markka")},
    {QStringLiteral("fis"), QStringLiteral("Stafi")},
    {QStringLiteral("fjd"), QStringLiteral("Fijian Dollar")},
    {QStringLiteral("fkp"), QStringLiteral("Falkland Island Pound")},
    {QStringLiteral("flow"), QStringLiteral("Flow")},
    {QStringLiteral("flr"), QStringLiteral("FLARE")},
    {QStringLiteral("fort"), QStringLiteral("Forta")},
    {QStringLiteral("forth"), QStringLiteral("Ampleforth Governance Token")},
    {QStringLiteral("fox"), QStringLiteral("Shapeshift FOX Token")},
    {QStringLiteral("frax"), QStringLiteral("Frax")},
    {QStringLiteral("frf"), QStringLiteral("French Franc")},
    {QStringLiteral("ftm"), QStringLiteral("Fantom")},
    {QStringLiteral("ftt"), QStringLiteral("FarmaTrust")},
    {QStringLiteral("fx"), QStringLiteral("Function X")},
    {QStringLiteral("gal"), QStringLiteral("Project Galaxy")},
    {QStringLiteral("gala"), QStringLiteral("Gala")},
    {QStringLiteral("gbp"), QStringLiteral("British Pound")},
    {QStringLiteral("gel"), QStringLiteral("Georgian Lari")},
    {QStringLiteral("gfi"), QStringLiteral("Goldfinch")},
    {QStringLiteral("ggp"), QStringLiteral("Guernsey Pound")},
    {QStringLiteral("ghc"), QStringLiteral("Ghanaian Cedi")},
    {QStringLiteral("ghs"), QStringLiteral("Ghanaian Cedi")},
    {QStringLiteral("ghst"), QStringLiteral("Aavegotchi")},
    {QStringLiteral("gip"), QStringLiteral("Gibraltar Pound")},
    {QStringLiteral("glm"), QStringLiteral("Golem")},
    {QStringLiteral("gmd"), QStringLiteral("Gambian Dalasi")},
    {QStringLiteral("gmt"), QStringLiteral("Stepn")},
    {QStringLiteral("gnf"), QStringLiteral("Guinean Franc")},
    {QStringLiteral("gno"), QStringLiteral("Gnosis")},
    {QStringLiteral("gnt"), QStringLiteral("GreenTrust")},
    {QStringLiteral("gods"), QStringLiteral("Gods Unchained")},
    {QStringLiteral("grd"), QStringLiteral("Greek Drachma")},
    {QStringLiteral("grt"), QStringLiteral("The Graph")},
    {QStringLiteral("gst"), QStringLiteral("Green Satoshi Token")},
    {QStringLiteral("gt"), QStringLiteral("GateToken")},
    {QStringLiteral("gtc"), QStringLiteral("Gitcoin")},
    {QStringLiteral("gtq"), QStringLiteral("Guatemalan Quetzal")},
    {QStringLiteral("gusd"), QStringLiteral("Gemini US Dollar")},
    {QStringLiteral("gyd"), QStringLiteral("Guyanese Dollar")},
    {QStringLiteral("gyen"), QStringLiteral("GYEN")},
    {QStringLiteral("hbar"), QStringLiteral("Hedera")},
    {QStringLiteral("hft"), QStringLiteral("Hashflow")},
    {QStringLiteral("high"), QStringLiteral("Highstreet")},
    {QStringLiteral("hkd"), QStringLiteral("Hong Kong Dollar")},
    {QStringLiteral("hnl"), QStringLiteral("Honduran Lempira")},
    {QStringLiteral("hnt"), QStringLiteral("Helium")},
    {QStringLiteral("hopr"), QStringLiteral("HOPR")},
    {QStringLiteral("hot"), QStringLiteral("Hydro Protocol")},
    {QStringLiteral("hrk"), QStringLiteral("Croatian Kuna")},
    {QStringLiteral("ht"), QStringLiteral("Huobi Token")},
    {QStringLiteral("htg"), QStringLiteral("Haitian Gourde")},
    {QStringLiteral("huf"), QStringLiteral("Hungarian Forint")},
    {QStringLiteral("icp"), QStringLiteral("Internet Computer")},
    {QStringLiteral("idex"), QStringLiteral("IDEX")},
    {QStringLiteral("idr"), QStringLiteral("Indonesian Rupiah")},
    {QStringLiteral("iep"), QStringLiteral("Irish Pound")},
    {QStringLiteral("ils"), QStringLiteral("Israeli Shekel")},
    {QStringLiteral("ilv"), QStringLiteral("Illuvium")},
    {QStringLiteral("imp"), QStringLiteral("Isle of Man Pound")},
    {QStringLiteral("imx"), QStringLiteral("Immutable X")},
    {QStringLiteral("index"), QStringLiteral("Index Cooperative")},
    {QStringLiteral("inj"), QStringLiteral("Injective")},
    {QStringLiteral("inr"), QStringLiteral("Indian Rupee")},
    {QStringLiteral("inv"), QStringLiteral("Inverse Finance")},
    {QStringLiteral("iotx"), QStringLiteral("IoTeX")},
    {QStringLiteral("iqd"), QStringLiteral("Iraqi Dinar")},
    {QStringLiteral("irr"), QStringLiteral("Iranian Rial")},
    {QStringLiteral("isk"), QStringLiteral("Icelandic Krona")},
    {QStringLiteral("itl"), QStringLiteral("Italian Lira")},
    {QStringLiteral("jasmy"), QStringLiteral("Jasmy")},
    {QStringLiteral("jep"), QStringLiteral("Jersey Pound")},
    {QStringLiteral("jmd"), QStringLiteral("Jamaican Dollar")},
    {QStringLiteral("jod"), QStringLiteral("Jordanian Dinar")},
    {QStringLiteral("jpy"), QStringLiteral("Japanese Yen")},
    {QStringLiteral("jup"), QStringLiteral("Jupiter")},
    {QStringLiteral("kas"), QStringLiteral("")},
    {QStringLiteral("kava"), QStringLiteral("Kava")},
    {QStringLiteral("kcs"), QStringLiteral("Kucoin")},
    {QStringLiteral("kda"), QStringLiteral("Kadena")},
    {QStringLiteral("keep"), QStringLiteral("Keep Network")},
    {QStringLiteral("kes"), QStringLiteral("Kenyan Shilling")},
    {QStringLiteral("kgs"), QStringLiteral("Kyrgyzstani Som")},
    {QStringLiteral("khr"), QStringLiteral("Cambodian Riel")},
    {QStringLiteral("klay"), QStringLiteral("Klaytn")},
    {QStringLiteral("kmf"), QStringLiteral("Comorian Franc")},
    {QStringLiteral("knc"), QStringLiteral("Kyber Network Crystals")},
    {QStringLiteral("kpw"), QStringLiteral("North Korean Won")},
    {QStringLiteral("krl"), QStringLiteral("Kryll")},
    {QStringLiteral("krw"), QStringLiteral("South Korean Won")},
    {QStringLiteral("ksm"), QStringLiteral("Kusama")},
    {QStringLiteral("kwd"), QStringLiteral("Kuwaiti Dinar")},
    {QStringLiteral("kyd"), QStringLiteral("Caymanian Dollar")},
    {QStringLiteral("kzt"), QStringLiteral("Kazakhstani Tenge")},
    {QStringLiteral("lak"), QStringLiteral("Lao Kip")},
    {QStringLiteral("lbp"), QStringLiteral("Lebanese Pound")},
    {QStringLiteral("lcx"), QStringLiteral("LCX")},
    {QStringLiteral("ldo"), QStringLiteral("Lido DAO Token")},
    {QStringLiteral("leo"), QStringLiteral("LEOcoin")},
    {QStringLiteral("link"), QStringLiteral("Chainlink")},
    {QStringLiteral("lit"), QStringLiteral("Litentry")},
    {QStringLiteral("lkr"), QStringLiteral("Sri Lankan Rupee")},
    {QStringLiteral("loka"), QStringLiteral("League of Kingdoms Arena")},
    {QStringLiteral("loom"), QStringLiteral("Loom Network")},
    {QStringLiteral("lpt"), QStringLiteral("Livepeer (LPT)")},
    {QStringLiteral("lqty"), QStringLiteral("Liquity")},
    {QStringLiteral("lrc"), QStringLiteral("Loopring")},
    {QStringLiteral("lrd"), QStringLiteral("Liberian Dollar")},
    {QStringLiteral("lseth"), QStringLiteral("Liquid Staked Ethereum")},
    {QStringLiteral("lsl"), QStringLiteral("Basotho Loti")},
    {QStringLiteral("ltc"), QStringLiteral("Litecoin")},
    {QStringLiteral("ltl"), QStringLiteral("Lithuanian Litas")},
    {QStringLiteral("luf"), QStringLiteral("Luxembourg Franc")},
    {QStringLiteral("luna"), QStringLiteral("Terra")},
    {QStringLiteral("lvl"), QStringLiteral("Latvian Lat")},
    {QStringLiteral("lyd"), QStringLiteral("Libyan Dinar")},
    {QStringLiteral("mad"), QStringLiteral("Moroccan Dirham")},
    {QStringLiteral("magic"), QStringLiteral("MAGIC")},
    {QStringLiteral("mana"), QStringLiteral("Mana Coin Decentraland")},
    {QStringLiteral("mask"), QStringLiteral("Mask Network")},
    {QStringLiteral("math"), QStringLiteral("MATH")},
    {QStringLiteral("matic"), QStringLiteral("Polygon")},
    {QStringLiteral("mco2"), QStringLiteral("Moss Carbon Credit")},
    {QStringLiteral("mdl"), QStringLiteral("Moldovan Leu")},
    {QStringLiteral("mdt"), QStringLiteral("Measurable Data Token")},
    {QStringLiteral("media"), QStringLiteral("Media Network")},
    {QStringLiteral("metis"), QStringLiteral("MetisDAO")},
    {QStringLiteral("mga"), QStringLiteral("Malagasy Ariary")},
    {QStringLiteral("mgf"), QStringLiteral("Malagasy Franc")},
    {QStringLiteral("mina"), QStringLiteral("Mina")},
    {QStringLiteral("miota"), QStringLiteral("IOTA")},
    {QStringLiteral("mir"), QStringLiteral("Mirror Protocol")},
    {QStringLiteral("mkd"), QStringLiteral("Macedonian Denar")},
    {QStringLiteral("mkr"), QStringLiteral("Maker")},
    {QStringLiteral("mln"), QStringLiteral("Enzyme")},
    {QStringLiteral("mmk"), QStringLiteral("Burmese Kyat")},
    {QStringLiteral("mnde"), QStringLiteral("Marinade")},
    {QStringLiteral("mnt"), QStringLiteral("Mongolian Tughrik")},
    {QStringLiteral("mona"), QStringLiteral("Monavale")},
    {QStringLiteral("mop"), QStringLiteral("Macau Pataca")},
    {QStringLiteral("mpl"), QStringLiteral("Maple")},
    {QStringLiteral("mro"), QStringLiteral("Mauritanian Ouguiya")},
    {QStringLiteral("mru"), QStringLiteral("Mauritanian Ouguiya")},
    {QStringLiteral("msol"), QStringLiteral("Marinade Staked SOL")},
    {QStringLiteral("mtl"), QStringLiteral("Maltese Lira")},
    {QStringLiteral("multi"), QStringLiteral("Multichain")},
    {QStringLiteral("mur"), QStringLiteral("Mauritian Rupee")},
    {QStringLiteral("musd"), QStringLiteral("mStableUSD")},
    {QStringLiteral("muse"), QStringLiteral("Muse")},
    {QStringLiteral("mvr"), QStringLiteral("Maldivian Rufiyaa")},
    {QStringLiteral("mwk"), QStringLiteral("Malawian Kwacha")},
    {QStringLiteral("mxc"), QStringLiteral("MXC")},
    {QStringLiteral("mxn"), QStringLiteral("Mexican Peso")},
    {QStringLiteral("mxv"), QStringLiteral("")},
    {QStringLiteral("myr"), QStringLiteral("Malaysian Ringgit")},
    {QStringLiteral("mzm"), QStringLiteral("Mozambican Metical")},
    {QStringLiteral("mzn"), QStringLiteral("Mozambican Metical")},
    {QStringLiteral("nad"), QStringLiteral("Namibian Dollar")},
    {QStringLiteral("nct"), QStringLiteral("Polyswarm")},
    {QStringLiteral("near"), QStringLiteral("NEAR Protocol")},
    {QStringLiteral("neo"), QStringLiteral("NEO")},
    {QStringLiteral("nest"), QStringLiteral("NEST Protocol")},
    {QStringLiteral("nexo"), QStringLiteral("NEXO")},
    {QStringLiteral("ngn"), QStringLiteral("Nigerian Naira")},
    {QStringLiteral("nio"), QStringLiteral("Nicaraguan Cordoba")},
    {QStringLiteral("nkn"), QStringLiteral("NKN")},
    {QStringLiteral("nlg"), QStringLiteral("Dutch Guilder")},
    {QStringLiteral("nmr"), QStringLiteral("Numeraire Network")},
    {QStringLiteral("nok"), QStringLiteral("Norwegian Krone")},
    {QStringLiteral("npr"), QStringLiteral("Nepalese Rupee")},
    {QStringLiteral("nu"), QStringLiteral("NuCypher")},
    {QStringLiteral("nzd"), QStringLiteral("New Zealand Dollar")},
    {QStringLiteral("ocean"), QStringLiteral("Ocean Protocol")},
    {QStringLiteral("ogn"), QStringLiteral("Origin Token")},
    {QStringLiteral("okb"), QStringLiteral("Okex")},
    {QStringLiteral("omg"), QStringLiteral("Omisego")},
    {QStringLiteral("omr"), QStringLiteral("Omani Rial")},
    {QStringLiteral("one"), QStringLiteral("Menlo One")},
    {QStringLiteral("ooki"), QStringLiteral("Ooki Protocol")},
    {QStringLiteral("op"), QStringLiteral("Optimism")},
    {QStringLiteral("orca"), QStringLiteral("Orca")},
    {QStringLiteral("orn"), QStringLiteral("Orion Protocol")},
    {QStringLiteral("osmo"), QStringLiteral("Osmosis")},
    {QStringLiteral("oxt"), QStringLiteral("Orchid Network")},
    {QStringLiteral("pab"), QStringLiteral("Panamanian Balboa")},
    {QStringLiteral("pax"), QStringLiteral("Paxos Standard Token")},
    {QStringLiteral("paxg"), QStringLiteral("PAX Gold")},
    {QStringLiteral("pen"), QStringLiteral("Peruvian Sol")},
    {QStringLiteral("perp"), QStringLiteral("Perpetual Protocol")},
    {QStringLiteral("pgk"), QStringLiteral("Papua New Guinean Kina")},
    {QStringLiteral("php"), QStringLiteral("Philippine Peso")},
    {QStringLiteral("pkr"), QStringLiteral("Pakistani Rupee")},
    {QStringLiteral("pla"), QStringLiteral("PlayDapp")},
    {QStringLiteral("pln"), QStringLiteral("Polish Zloty")},
    {QStringLiteral("plu"), QStringLiteral("Pluton")},
    {QStringLiteral("png"), QStringLiteral("Pangolin")},
    {QStringLiteral("pols"), QStringLiteral("Polkastarter")},
    {QStringLiteral("poly"), QStringLiteral("Polymath")},
    {QStringLiteral("pond"), QStringLiteral("Marlin")},
    {QStringLiteral("powr"), QStringLiteral("Powerledger")},
    {QStringLiteral("prime"), QStringLiteral("Echelon Prime")},
    {QStringLiteral("pro"), QStringLiteral("Propy")},
    {QStringLiteral("prq"), QStringLiteral("PARSIQ")},
    {QStringLiteral("pte"), QStringLiteral("Portuguese Escudo")},
    {QStringLiteral("pundix"), QStringLiteral("Pundi X (New)")},
    {QStringLiteral("pyg"), QStringLiteral("Paraguayan Guarani")},
    {QStringLiteral("pyr"), QStringLiteral("Vulcan Forged PYR")},
    {QStringLiteral("qar"), QStringLiteral("Qatari Riyal")},
    {QStringLiteral("qi"), QStringLiteral("BENQI")},
    {QStringLiteral("qnt"), QStringLiteral("Quant")},
    {QStringLiteral("qsp"), QStringLiteral("Quantstamp")},
    {QStringLiteral("qtum"), QStringLiteral("QTUM")},
    {QStringLiteral("quick"), QStringLiteral("QuickSwap")},
    {QStringLiteral("rad"), QStringLiteral("Radicle")},
    {QStringLiteral("rai"), QStringLiteral("Rai Reflex Index")},
    {QStringLiteral("rare"), QStringLiteral("SuperRare")},
    {QStringLiteral("rari"), QStringLiteral("Rarible")},
    {QStringLiteral("rbn"), QStringLiteral("Ribbon FInance")},
    {QStringLiteral("ren"), QStringLiteral("renBTC")},
    {QStringLiteral("rep"), QStringLiteral("Augur")},
    {QStringLiteral("repv2"), QStringLiteral("REPv2")},
    {QStringLiteral("req"), QStringLiteral("Request")},
    {QStringLiteral("rgt"), QStringLiteral("Rari Governance Token")},
    {QStringLiteral("rlc"), QStringLiteral("iExec RLC")},
    {QStringLiteral("rly"), QStringLiteral("Rally")},
    {QStringLiteral("rndr"), QStringLiteral("Render Token")},
    {QStringLiteral("rol"), QStringLiteral("Romanian Leu")},
    {QStringLiteral("ron"), QStringLiteral("Romanian Leu")},
    {QStringLiteral("rose"), QStringLiteral("Oasis Network")},
    {QStringLiteral("rpl"), QStringLiteral("Rocket Pool")},
    {QStringLiteral("rsd"), QStringLiteral("Serbian Dinar")},
    {QStringLiteral("rub"), QStringLiteral("Russian Ruble")},
    {QStringLiteral("rune"), QStringLiteral("THORChain (ERC20)")},
    {QStringLiteral("rvn"), QStringLiteral("Ravencoin")},
    {QStringLiteral("rwf"), QStringLiteral("Rwandan Franc")},
    {QStringLiteral("sand"), QStringLiteral("The Sandbox")},
    {QStringLiteral("sar"), QStringLiteral("Saudi Arabian Riyal")},
    {QStringLiteral("sbd"), QStringLiteral("Solomon Islander Dollar")},
    {QStringLiteral("scr"), QStringLiteral("Seychellois Rupee")},
    {QStringLiteral("sdd"), QStringLiteral("Sudanese Dinar")},
    {QStringLiteral("sdg"), QStringLiteral("Sudanese Pound")},
    {QStringLiteral("sei"), QStringLiteral("")},
    {QStringLiteral("sek"), QStringLiteral("Swedish Krona")},
    {QStringLiteral("sgd"), QStringLiteral("Singapore Dollar")},
    {QStringLiteral("shib"), QStringLiteral("Shiba Inu")},
    {QStringLiteral("shp"), QStringLiteral("Saint Helenian Pound")},
    {QStringLiteral("shping"), QStringLiteral("Shping Coin")},
    {QStringLiteral("sit"), QStringLiteral("Slovenian Tolar")},
    {QStringLiteral("skk"), QStringLiteral("Slovak Koruna")},
    {QStringLiteral("skl"), QStringLiteral("SKALE Network")},
    {QStringLiteral("sle"), QStringLiteral("Sierra Leonean Leone")},
    {QStringLiteral("sll"), QStringLiteral("Sierra Leonean Leone")},
    {QStringLiteral("snt"), QStringLiteral("Status Network")},
    {QStringLiteral("snx"), QStringLiteral("Synthetix Network")},
    {QStringLiteral("sol"), QStringLiteral("Solana")},
    {QStringLiteral("sos"), QStringLiteral("Somali Shilling")},
    {QStringLiteral("spa"), QStringLiteral("Sperax")},
    {QStringLiteral("spell"), QStringLiteral("Spell Token")},
    {QStringLiteral("spl"), QStringLiteral("Seborgan Luigino")},
    {QStringLiteral("srd"), QStringLiteral("Surinamese Dollar")},
    {QStringLiteral("srg"), QStringLiteral("Surinamese Guilder")},
    {QStringLiteral("ssp"), QStringLiteral("South Sudanese Pound")},
    {QStringLiteral("std"), QStringLiteral("Sao Tomean Dobra")},
    {QStringLiteral("stg"), QStringLiteral("Stargate Finance")},
    {QStringLiteral("stn"), QStringLiteral("Sao Tomean Dobra")},
    {QStringLiteral("storj"), QStringLiteral("Storj")},
    {QStringLiteral("stx"), QStringLiteral("Stacks")},
    {QStringLiteral("sui"), QStringLiteral("Sui")},
    {QStringLiteral("suku"), QStringLiteral("SUKU")},
    {QStringLiteral("super"), QStringLiteral("SuperFarm")},
    {QStringLiteral("sushi"), QStringLiteral("SushiSwap")},
    {QStringLiteral("svc"), QStringLiteral("Salvadoran Colon")},
    {QStringLiteral("swftc"), QStringLiteral("SwftCoin")},
    {QStringLiteral("sylo"), QStringLiteral("Sylo")},
    {QStringLiteral("syn"), QStringLiteral("Synapse")},
    {QStringLiteral("syp"), QStringLiteral("Syrian Pound")},
    {QStringLiteral("szl"), QStringLiteral("Swazi Lilangeni")},
    {QStringLiteral("t"), QStringLiteral("Threshold")},
    {QStringLiteral("thb"), QStringLiteral("Thai Baht")},
    {QStringLiteral("theta"), QStringLiteral("Theta")},
    {QStringLiteral("time"), QStringLiteral("Chrono.tech")},
    {QStringLiteral("tjs"), QStringLiteral("Tajikistani Somoni")},
    {QStringLiteral("tmm"), QStringLiteral("Turkmenistani Manat")},
    {QStringLiteral("tmt"), QStringLiteral("Turkmenistani Manat")},
    {QStringLiteral("tnd"), QStringLiteral("Tunisian Dinar")},
    {QStringLiteral("ton"), QStringLiteral("Tokamak Network")},
    {QStringLiteral("tone"), QStringLiteral("TE-FOOD")},
    {QStringLiteral("top"), QStringLiteral("Tongan Pa'anga")},
    {QStringLiteral("trac"), QStringLiteral("OriginTrail")},
    {QStringLiteral("trb"), QStringLiteral("Tellor")},
    {QStringLiteral("tribe"), QStringLiteral("Tribe")},
    {QStringLiteral("trl"), QStringLiteral("Turkish Lira")},
    {QStringLiteral("tru"), QStringLiteral("TrueFi")},
    {QStringLiteral("trx"), QStringLiteral("TRON")},
    {QStringLiteral("try"), QStringLiteral("Turkish Lira")},
    {QStringLiteral("ttd"), QStringLiteral("Trinidadian Dollar")},
    {QStringLiteral("tusd"), QStringLiteral("True USD")},
    {QStringLiteral("tvd"), QStringLiteral("Tuvaluan Dollar")},
    {QStringLiteral("tvk"), QStringLiteral("Terra Virtua Kolect")},
    {QStringLiteral("twd"), QStringLiteral("Taiwan New Dollar")},
    {QStringLiteral("tzs"), QStringLiteral("Tanzanian Shilling")},
    {QStringLiteral("uah"), QStringLiteral("Ukrainian Hryvnia")},
    {QStringLiteral("ugx"), QStringLiteral("Ugandan Shilling")},
    {QStringLiteral("uma"), QStringLiteral("Universal Market Access")},
    {QStringLiteral("unfi"), QStringLiteral("Unifi Protocol DAO")},
    {QStringLiteral("uni"), QStringLiteral("Uniswap")},
    {QStringLiteral("upi"), QStringLiteral("Pawtocol")},
    {QStringLiteral("usd"), QStringLiteral("US Dollar")},
    {QStringLiteral("usdc"), QStringLiteral("USDC")},
    {QStringLiteral("usdp"), QStringLiteral("USDP Stablecoin")},
    {QStringLiteral("usdt"), QStringLiteral("Tether")},
    {QStringLiteral("ust"), QStringLiteral("TerraUSD")},
    {QStringLiteral("uyu"), QStringLiteral("Uruguayan Peso")},
    {QStringLiteral("uzs"), QStringLiteral("Uzbekistani Som")},
    {QStringLiteral("val"), QStringLiteral("Vatican City Lira")},
    {QStringLiteral("veb"), QStringLiteral("Venezuelan Bolívar")},
    {QStringLiteral("ved"), QStringLiteral("")},
    {QStringLiteral("vef"), QStringLiteral("Venezuelan Bolívar")},
    {QStringLiteral("ves"), QStringLiteral("Venezuelan Bolívar")},
    {QStringLiteral("vet"), QStringLiteral("Vechain")},
    {QStringLiteral("vgx"), QStringLiteral("Voyager Token")},
    {QStringLiteral("vnd"), QStringLiteral("Vietnamese Dong")},
    {QStringLiteral("voxel"), QStringLiteral("Voxies")},
    {QStringLiteral("vuv"), QStringLiteral("Ni-Vanuatu Vatu")},
    {QStringLiteral("wampl"), QStringLiteral("Wrapped Ampleforth")},
    {QStringLiteral("waves"), QStringLiteral("Waves")},
    {QStringLiteral("waxl"), QStringLiteral("Axelar")},
    {QStringLiteral("wbtc"), QStringLiteral("Wrapped Bitcoin")},
    {QStringLiteral("wcfg"), QStringLiteral("Wrapped Centrifuge")},
    {QStringLiteral("wemix"), QStringLiteral("WEMIX")},
    {QStringLiteral("wluna"), QStringLiteral("Wrapped LUNA")},
    {QStringLiteral("wst"), QStringLiteral("Samoan Tala")},
    {QStringLiteral("xaf"), QStringLiteral("Central African CFA Franc BEAC")},
    {QStringLiteral("xag"), QStringLiteral("Silver Ounce")},
    {QStringLiteral("xau"), QStringLiteral("Gold Ounce")},
    {QStringLiteral("xbt"), QStringLiteral("")},
    {QStringLiteral("xcd"), QStringLiteral("East Caribbean Dollar")},
    {QStringLiteral("xch"), QStringLiteral("Chia")},
    {QStringLiteral("xcn"), QStringLiteral("Chain")},
    {QStringLiteral("xdc"), QStringLiteral("XDC Network")},
    {QStringLiteral("xdr"), QStringLiteral("IMF Special Drawing Rights")},
    {QStringLiteral("xec"), QStringLiteral("Eternal Coin")},
    {QStringLiteral("xem"), QStringLiteral("NEM")},
    {QStringLiteral("xlm"), QStringLiteral("Stellar Lumen")},
    {QStringLiteral("xmon"), QStringLiteral("XMON")},
    {QStringLiteral("xmr"), QStringLiteral("Monero")},
    {QStringLiteral("xof"), QStringLiteral("CFA Franc")},
    {QStringLiteral("xpd"), QStringLiteral("Palladium Ounce")},
    {QStringLiteral("xpf"), QStringLiteral("CFP Franc")},
    {QStringLiteral("xpt"), QStringLiteral("Platinum Ounce")},
    {QStringLiteral("xrp"), QStringLiteral("Ripple")},
    {QStringLiteral("xtz"), QStringLiteral("Tezos")},
    {QStringLiteral("xyo"), QStringLiteral("XYO Network")},
    {QStringLiteral("yer"), QStringLiteral("Yemeni Rial")},
    {QStringLiteral("yfi"), QStringLiteral("Yearn Finance")},
    {QStringLiteral("yfii"), QStringLiteral("DFI.Money")},
    {QStringLiteral("zar"), QStringLiteral("South African Rand")},
    {QStringLiteral("zec"), QStringLiteral("ZCash")},
    {QStringLiteral("zen"), QStringLiteral("Horizen")},
    {QStringLiteral("zil"), QStringLiteral("Zilliqa")},
    {QStringLiteral("zmk"), QStringLiteral("Zambian Kwacha")},
    {QStringLiteral("zmw"), QStringLiteral("Zambian Kwacha")},
    {QStringLiteral("zrx"), QStringLiteral("ZRX 0x")},
    {QStringLiteral("zwd"), QStringLiteral("Zimbabwean Dollar")},
};