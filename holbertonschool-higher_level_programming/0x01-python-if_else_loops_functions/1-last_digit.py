#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
if number < 0:
    lastnum = (number * -1) % 10
else:
    lastnum = number % 10
if lastnum > 5:
    print("Last digit of {:d} is {:d} and is greater\
 than 5".format(number, lastnum))
elif lastnum == 0:
    print("Last digit of {:d} is {:d} and is 0".format(number, lastnum))
elif lastnum < 6:
    print("Last digit of {:d} is {:d} and is less than\
 6 and not 0".format(number, lastnum))
