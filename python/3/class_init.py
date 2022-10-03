#!/bin/env python
class Person:
    def __init__(self,name):
        self.name = name
    def say_hi(self):
        print('Hello!My name is', self.name)
if __name__ == '__main__':
    p=Person('donote')
    p.say_hi()
