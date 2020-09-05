#!/usr/bin/python3
def remove_char_at(str, n):
    partialStr1 = str[:(n)]
    partialStr2 = str[(n + 1):]
    return (partialStr1 + partialStr2)
