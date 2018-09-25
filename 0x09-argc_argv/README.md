# 0x09. C - argc, argv
Low-level programming & Algorithm ― Hatching out

## Purpose
- To learn how to use arguments passed to your program
- To learn what are two prototypes of main that you know of, and in which case do you use one or the other
- To learn How to use `__attribute__((unused))` or `(void)` to compile functions with unused variables or parameters

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
cd 0x09-argc_argv
```
After change current working directory to **0x09-argc_argv** directory, issue the following command to compile

* Run .c file
```
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output filename>
```
Once the .c files are compiled you can run the program by issuing the command
```
./<output filename> argument1 argument2
```

## Usage Examples
```
$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```
## Files
Task number | File | Desc
---|--|---
0 | 0-whatsmyname.c, *0-main.c* | prints its name, followed by a new line.
1 | 1-args.c | prints the number of arguments passed into it.
2 | 2-args.c |  prints all arguments it receives. 
3 | 3-mul.c | multiplies two numbers.
4 | 4-add.c | adds positive numbers.
5 | 100-change.c | prints the minimum number of coins to make change for an amount of money.


* All main.c files in *Italic characters* are provided by [Holberton School](https://www.holbertonschool.com/) 
## Authors
Sumin Yu