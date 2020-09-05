#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    new_list = list(set_1) + list(set_2)
    new_set = set()

    for i in new_list:
        if i not in new_set:
            new_set.add(i)

    return new_set
