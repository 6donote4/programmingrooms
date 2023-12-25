#!/usr/bin/bash
list=`ls $1|cat|grep .c|awk -F. '{print $1}'|uniq `
for i in $list
do
    gcc -o $1/$i.i -E -I./$1 $1/$i.c
    gcc -o $1/$i.s -S -I./$1 $1/$i.c
    gcc -o $1/$i.o -c $1/$i.s
    gcc -o $1/$i $1/$i.c
done
exit 0
