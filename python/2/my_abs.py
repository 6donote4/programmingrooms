#!/usr/bin/python2
def my_abs(x):
    if not isinstance(x,(int,float)):
        raise TypeError('bad operand type')
    if x >= 0:
        return x
    else:
        return -x
a = int(raw_input('Please input a number:'))
print my_abs(a)
my_abs('t')
