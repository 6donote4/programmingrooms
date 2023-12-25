#!/usr/bin/bash
file $1/*|grep ELF|awk -F: '{print $1}'|xargs -I[] rm -f []
rm -rf $1/*.i
rm -rf $1/*.s
exit 0
