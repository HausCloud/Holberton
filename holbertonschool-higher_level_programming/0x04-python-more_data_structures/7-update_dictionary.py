#!/usr/bin/python3
def update_dictionary(a_dictionary, key, value):
    key_list = a_dictionary.keys()
    for i in key_list:
        if i is key:
            a_dictionary[key] = value
            return a_dictionary
    a_dictionary.update({key: value})
    return a_dictionary