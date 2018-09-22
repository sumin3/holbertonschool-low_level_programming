# 0x0C. C - Preprocessor
Low-level programming & Algorithm ― Hatching out

## Purpose
- To learn what are macros and how to use them
- To learn how to include guard your header files

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
cd 0x0C-preprocessor
```
After change current working directory to **0x0C-preprocessor** directory, issue the following command to compile

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
0 | 0-object_like_macro.h, *0-main.c* | Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
1 | 1-pi.h, *1-main.c* | Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
2 | 2-main.c | Write a program that prints the name of the file it was compiled from, followed by a new line.
3 | 3-function_like_macro.h, *3-main.c* | Write a function-like macro ABS(x) that computes the absolute value of a number x.
4 | 4-sum.h, *4-main.c* | Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
6 | 101-preprocessor_abuse.c | Write a program that can print Hello, Holberton, followed by a new line.

* All main.c files in *Italic characters* are provided by [Holberton School](https://www.holbertonschool.com/) 
## Authors
Sumin Yu