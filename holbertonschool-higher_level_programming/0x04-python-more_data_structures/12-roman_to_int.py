#!/usr/bin/python3
def roman_to_int(roman_string):
    my_dict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    if len(roman_string) == 1:
        for key in my_dict:
            if roman_string[0] is key:
                inTEger = my_dict.get(key)
                return (inTEger)
    else:
        my_list = []
        ind1 = 0
        ind2 = 1
        for i in roman_string:
            for key in my_dict:
                if i is key:
                    my_list.append(my_dict.get(key))

        list_length = len(my_list)

        if (list_length % 2) == 0:
            half = list_length / 2
            while half > 0:
                if my_list[ind1] < my_list[ind2]:
                    sum = my_list[ind1] + my_list[ind2]
                else:
                    sum = my_list[ind1] - my_list[ind2]
                ind1 += 2
                ind2 += 2
                half -= 1
        else:
            last = my_list[-1:]
            half = (list_length - 1) / 2
            while half > 0:
                if my_list[ind1] > my_list[ind2]:
                    sum = my_list[ind1] + my_list[ind2]
                else:
                    sum = my_list[ind1] - my_list[ind2]
                ind1 += 2
                ind2 += 2
                half -= 1

        return sum
