#!/usr/bin/python3
def number_of_lines(filename=""):
    line_count = 0
    with open(filename) as var:
        for line in var:
            line_count += 1
    return line_count
