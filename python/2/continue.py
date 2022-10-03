#!/usr/bin/python2

while True:
    s = raw_input('Enter something:')
    if s == 'quit':
        break
    if len(s) < 3:
        continue
    print 'Input is of sufficient lenght'
