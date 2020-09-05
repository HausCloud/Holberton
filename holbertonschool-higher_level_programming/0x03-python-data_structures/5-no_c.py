#!/usr/bin/python3
def no_c(my_string):
    my_list = list(my_string)
    for i in my_list:
        if i == 'c' or i == 'C':
            my_list.remove(i)
    new_string = "".join(my_list)
    return (new_string)
