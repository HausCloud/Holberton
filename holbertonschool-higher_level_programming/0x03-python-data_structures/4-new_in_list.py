#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    list_length = len(my_list) - 1
    if idx > list_length or idx < 0:
        return (my_list)
    else:
        new_new_list = my_list.copy()
        new_new_list[idx] = element
        return (new_new_list)
