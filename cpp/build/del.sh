#!/usr/bin/bash
file $1/*|grep ELF|awk -F: '{print $1}'|xargs -I[] rm -f []
exit 0
