#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra *.c
ar rc liball.a *.o
