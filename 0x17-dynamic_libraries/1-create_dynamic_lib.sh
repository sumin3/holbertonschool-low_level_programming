#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra -fPIC *.c
gcc -Wall -pedantic -Werror -Wextra -shared -o libholberton.so *.o
