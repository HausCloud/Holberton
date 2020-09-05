#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c && ar rc -s liball.a *.o
