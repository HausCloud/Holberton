#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    new_list = []
    index = 0
    x = 0
    while index < list_length:
        try:
            c = (my_list_1[index] / my_list_2[index])
            index += 1
            x = 0
        except (TypeError, ValueError):
            print("wrong type")
            index += 1
            x = -1
        except ZeroDivisionError:
            print("division by 0")
            index += 1
            x = -1
        except IndexError:
            print("out of range")
            index += 1
            x = -1
        finally:
            if x == 0:
                new_list.append(c)
            else:
                new_list.append(0)
    return new_list
