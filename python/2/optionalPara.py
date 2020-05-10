#!/usr/bin/python2
def calc(*numbers):
    sum = 0
    for n in numbers:
        sum = sum + n * n
    return sum

a = range(4)
print calc(*a)
