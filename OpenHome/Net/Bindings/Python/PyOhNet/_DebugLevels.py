"""PyOhNet: definition of ohNet debug levels
"""

kDebugLevel = {
    'None':             0,
    'Thread':           1 << 0,
    'Network':          1 << 1,
    'Timer':            1 << 2,
    'SsdpMulticast':    1 << 3,
    'SsdpUnicast':      1 << 4,
    'Http':             1 << 5,
    'Device':           1 << 6,
    'XmlFetch':         1 << 7,
    'Service':          1 << 8,
    'Event':            1 << 9,
    'DvSsdpNotifier':   1 << 10,
    'DvInvocation':     1 << 11,
    'DvEvent':          1 << 12,
    'DvWebSocket':      1 << 13,
    'Lpec':             1 << 14,
    'Bonjour':          1 << 15,
    'DvDevice':         1 << 16,
    'Application0':     1 << 17,
    'Application1':     1 << 18,
    'Application2':     1 << 19,
    'Application3':     1 << 20,
    'Application4':     1 << 21,
    'Application5':     1 << 22,
    'Application6':     1 << 23,
    'Application7':     1 << 24,
    'Application8':     1 << 25,
    'Application9':     1 << 26,
    'Application10':    1 << 27,
    'Application11':    1 << 28,
    'Application12':    1 << 29,
    'Application13':    1 << 30,
    'Application14':    1 << 31,
    'Application15':    1 << 32,
    'Application16':    1 << 33,
    'Application17':    1 << 34,
    'Application18':    1 << 35,
    'Application19':    1 << 36,
    'Application20':    1 << 37,
    'Application21':    1 << 38,
    'Application22':    1 << 39,
    'Application23':    1 << 40,
    'Application24':    1 << 41,
    'Application25':    1 << 42,
    'Application26':    1 << 43,
    'Application27':    1 << 44,
    'Application28':    1 << 45,
    'Application29':    1 << 46,
    'Application30':    1 << 47,
    'Application31':    1 << 48,
    'Application32':    1 << 49,
    'Application33':    1 << 50,
    'Application34':    1 << 51,
    'Application35':    1 << 52,
    'Application36':    1 << 53,
    'Application37':    1 << 54,
    'Application38':    1 << 55,
    'Application39':    1 << 56,
    'Application40':    1 << 57,
    'Application41':    1 << 58,
    'Application42':    1 << 59,
    'Application43':    1 << 60,
    'Application44':    1 << 61,
    'CpDeviceDv':       1 << 62,
    'AdapterChange':    1 << 63,
    'All':              0xFFFFFFFFFFFFFFFF
}

kSeverityLevel = {
    'None':     0,
    'Critical': 1,
    'Error':    2,
    'Warning':  3,
    'Info':     4,
    'Debug':    5,
    'Trace':    6,
}
