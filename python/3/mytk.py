#!/bin/python
import tkinter as tk
from tkinter.constants import *
mytk = tk.Tk()
mytk.title('mytk')
frame = tk.Frame(mytk, relief=RIDGE, borderwidth=2)
frame.pack(fill=BOTH, expand=1)
label = tk.Label(frame, text="test")
label.pack(fill=X, expand=1)
button = tk.Button(frame, text="Exit", command=mytk.destroy )
button.pack(side=BOTTOM)
mytk.mainloop()
