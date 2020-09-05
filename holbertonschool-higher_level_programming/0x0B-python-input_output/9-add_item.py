#!/usr/bin/python3
from sys import argv
import json
import os.path
savetoJ = __import__('7-save_to_json_file').save_to_json_file
loadfromJ = __import__('8-load_from_json_file').load_from_json_file


argument_count = len(argv)
some_list = []
if os.path.isfile('add_item.json') is not True:
    savetoJ(some_list, 'add_item.json')
else:
    some_list = loadfromJ('add_item.json')
    for i in range(1, argument_count):
        some_list.append(argv[i])
    savetoJ(some_list, 'add_item.json')
