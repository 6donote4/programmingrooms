#!/usr/bin/python

import webbrowser as wb

class Web:
    headers = 'https://'
    def open(self,url):
        self.target = Web.headers + url
        wb.open(self.target,new=0)
    def open_new(self,url):
        self.target = Web.headers + url
        wb.open_new(self.target)

url = "www.bing.com"
w = Web()
w.open_new(url)
