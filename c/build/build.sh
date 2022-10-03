#!/usr/bin/bash
list=`ls |cat|grep .c|awk -F. '{print $1}'|uniq `
for i in $list
do
    gcc -o $i $i.c
done
exit 0
