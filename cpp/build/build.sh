#!/usr/bin/bash
list=`ls |cat|grep .cpp|awk -F. '{print $1}'|uniq `
for i in $list
do
    g++ -o $i $i.cpp
done
exit 0
