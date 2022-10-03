#!/usr/bin/python2

import cPickle as p

shoplistfile = 'shoplist.date'

shoplist = ['apple','mango','carrot']

f = file(shoplistfile,'w')
p.dump(shoplist,f)

del shoplist

f = file(shoplistfile)
storedlist = p.load(f)
print storedlist
