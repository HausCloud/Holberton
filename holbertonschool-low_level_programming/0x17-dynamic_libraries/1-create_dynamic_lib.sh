#!/bin/bash
gcc -fPIC -c -Wall *.c && gcc -shared -o liball.so *.o
