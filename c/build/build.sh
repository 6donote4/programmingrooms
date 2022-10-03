#!/usr/bin/bash
list=`ls $1|cat|grep .c|awk -F. '{print $1}'|uniq `
for i in $list
do
    gcc -o $1/$i $1/$i.c
done
exit 0
