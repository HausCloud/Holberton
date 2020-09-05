#!/usr/bin/python3
import inspect
def add_attribute(cls, thing1, thing2):
    if type(cls) is not '__main__.MyClass':
        return 
    setattr(cls, thing1, thing2)
