# 0x0F. C - Variadic functions
Low-level programming & Algorithm ― Hatching out

## Purpose
- To learn what are variadic functions
- To learn how to use va_start, va_arg and va_end macros
- To learn why and how to use the const type qualifier

## Coding style
- All C files are compiled on Ubuntu 14.04 LTS and using [Betty Style](https://\github.com/holbertonschool/Betty) for checking coding and documentation styles.

## Getting started
To use, first download  this repository into your local machine by issuing the following command in your local terminal. 
```
git clone https://github.com/sumin3/holbertonschool-low_level_programming.git
```
#### Directory
Each directoy's name includes information below
1. a number which orders projects from beginning to advanced level
2. name of programming language
3. concept/topic.
#### Change Directory
```
cd 0x0F-variadic_functions
```
After change current working directory to **0x0F-variadic_functions** directory, issue the following command to compile

* Run .c file
```
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output filename>
```
Once the .c files are compiled you can run the program by issuing the command
```
./<output filename>
```

## Usage Examples
```
$ ./a 
1
5
0
98
402
```
## Files
Task number | File | Desc
---|--|---
0 | 0-sum_them_all.c, *0-main.c* | returns the sum of all its parameters.
1 | 1-print_numbers.c, *1-main.c* | prints numbers, followed by a new line.
2 | 2-print_strings.c, *2-main.c* | prints strings, followed by a new line.
3 | 3-print_all.c, *3-main.c* | prints anything.

* All main.c files in *Italic characters* and header file - *variadic_functions.h* are provided by [Holberton School](https://www.holbertonschool.com/) 
## Authors
Sumin Yu