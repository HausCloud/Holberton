#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import add, sub, mul, div
    import sys
    argc1 = len(sys.argv)
    if argc1 != 4:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        sys.exit(1)
    else:
        operator = sys.argv[2]
        val1 = int(sys.argv[1])
        val2 = int(sys.argv[3])
        if operator == '+':
            print("{:d} {:s} {:d} = {:d}".format(val1, operator, val2, add(val1, val2)))
        elif operator == '-':
            print("{:d} {:s} {:d} = {:d}".format(val1, operator, val2, sub(val1, val2)))
        elif operator == '*':
            print("{:d} {:s} {:d} = {:d}".format(val1, operator, val2, mul(val1, val2)))
        elif operator == '/':
            print("{:d} {:s} {:d} = {:d}".format(val1, operator, val2, div(val1, val2)))
        else:
            print("Unknown operator. Available operators: +, -, * and /")
            sys.exit(1)
