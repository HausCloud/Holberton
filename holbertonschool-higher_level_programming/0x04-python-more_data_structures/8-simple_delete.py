#!/usr/bin/python3
def simple_delete(a_dictionary, key=""):
    key_list = a_dictionary.keys()
    for i in key_list:
        if i is key:
            a_dictionary.pop(key, None)
            return a_dictionary
    return a_dictionary
