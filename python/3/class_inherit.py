#!/bin/env python
class Schoolmember:
    def __init__(self,name,age):
        self.name = name
        self.age = age
        print('Initial Schoolmember:%s'% self.name)
    def tell(self):
        print('Name:"%s" Age:"%s"'%(self.name,self.age))
class teacher(Schoolmember):
    def __init__(self,name,age,salary):
        Schoolmember.__init__(self,name,age)
        self.salary = salary
        print('Initial teacher:%s'%self.name)
    def tell(self):
        Schoolmember.tell(self)
        print ('Salary:"%s"'%self.salary)
class student(Schoolmember):
    def __init__(self,name,age,marks):
        Schoolmember.__init__(self,name,age)
        self.marks = marks
        print('Initial Student:%s'%self.name)
    def tell(self):
        Schoolmember.tell(self)
        print('Math mark : "%s"'%self.marks)

if __name__ == '__main__':
        person=Schoolmember("Somebody","25")
        person.tell()
        t=teacher('KongZi','29','7000')
        t.tell()
        s=student('XiYou','16','96')
        s.tell()
