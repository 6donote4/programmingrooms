#!/usr/bin/bash
file *|grep ELF|awk -F: '{print $1}'|xargs -I[] rm -f []
exit 0
