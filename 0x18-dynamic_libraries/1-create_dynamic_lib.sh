#!/bin/bash
gcc -c -fpic -Wall -Werror -Wextra *.c
gcc -shared -o liball.so *.o
