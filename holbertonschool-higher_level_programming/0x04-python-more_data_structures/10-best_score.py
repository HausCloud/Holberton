#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary is None:
        return None
    for key in a_dictionary:
        x = a_dictionary.get(key)
        break
    for key in a_dictionary:
        if x < a_dictionary.get(key):
            x = a_dictionary.get(key)
    for key in a_dictionary:
        if x == a_dictionary.get(key):
            return (key)
