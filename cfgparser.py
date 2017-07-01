#!/usr/bin/env python

from ConfigParser import ConfigParser
import re
import os

#current_path = os.getcwd()
current_path = '/usr/local/bin/PanicCFG'
cfgFile = '%s/config.txt' % current_path
config = ConfigParser()
config.read(cfgFile)

def listPanicTriage(flag):
    items = ''
    
    panic_items = config.items('PanicTriage')
    for item in panic_items:
        item = ':'.join(list(item))
        item = re.match(r'(.*?):(.*)',item).group(2)
        #print 'item:',item
        items += '%s:' % item
    items += 'None'
    
    return items

def getCMDWithTriage(str_Triage):
    items = ''
    #items = '%s:' % str_Triage
    action_items = config.items(str_Triage)
    for cmd in action_items:
        cmd = ':'.join(list(cmd))
        cmd = re.match(r'(.*?):(.*)',cmd).group(2)
        #print 'cmd:',cmd
        items += '%s:' % cmd
    items += 'None'
    return items

def test():
    panicTriage=listPanicTriage(1)
    print panicTriage
    
#test
#test()




