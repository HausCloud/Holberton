#!/usr/bin/python3
if __name__ == "__main__":
    import hidden_4
    import inspect
    all_functions = inspect.getmembers(hidden_4, inspect.isfunction)
    for element in all_functions:
        print("{:s}".format(element[0]))
