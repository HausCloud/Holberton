#!/usr/bin/python3
def read_lines(filename="", nb_lines=0):
    count = 0
    total_lines = 0
    with open(filename, encoding='utf-8') as var:
        for line in var:
            total_lines += 1
        var.seek(0, 0)
        if nb_lines <= 0 or nb_lines >= total_lines:
            for line in var:
                print(line, end='')
        else:
            for line in var:
                if (count < nb_lines):
                    print(line, end='')
                    count += 1
                else:
                    count += 1
                    continue
