#!/usr/bin/bash
list=`ls $1|cat|grep .cpp|awk -F. '{print $1}'|uniq `
for i in $list
do
    g++ -o $1/$i $1/$i.cpp
done
exit 0
