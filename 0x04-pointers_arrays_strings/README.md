<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x04. C - Pointers, arrays and strings
Low-level programming & Algorithm ― Hatching out

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x04-pointers_arrays_strings#author)

## Purpose
- To learn What are pointers and how to use them
- To learn What are arrays and how to use them
- To learn What are the differences between pointers and arrays
- To learn How to use strings and how to manipulate them

## Coding style
- All C files are compiled on Ubuntu 14.04 LTS and using [Betty Style](https://\github.com/holbertonschool/Betty) for checking coding and documentation styles.

## Installation
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
cd 0x04-pointers_arrays_strings
```

## Usage
```
gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output filename>
```
Once the .c files are compiled you can run the program by issuing the command
```
./<output filename>
```

### Usage Example
```
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-isdigit.c -o 1-isdigit
$ ./1-isdigit 
0: 1
a: 0
```

## Files
|File| File Hierarchy  | Description
|---|----|-----
| `0-reset_to_98.c` | [0-reset_to_98.c](0-reset_to_98.c) | Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
| `1-swap.c` | [1-swap.c](1-swap.c) |  Write a function that swaps the values of two integers.
| `2-strlen.c` | [2-strlen.c](2-strlen.c) | Write a function that returns the length of a string.
| `3-puts.c` | [3-puts.c](3-puts.c) |  Write a function that prints a string, followed by a new line, to stdout.
| `4-print_rev.c` | [4-print_rev.c](4-print_rev.c) | Write a function that prints a string, in reverse, followed by a new line.
| `5-rev_string.c` | [5-rev_string.c](5-rev_string.c) | Write a function that reverses a string.
| `6-puts2.c`| [6-puts2.c](6-puts2.c) | Write a function that prints one char out of 2 of a string, followed by a new line.
| `7-puts_half.c`| [7-puts_half.c](7-puts_half.c) | Write a function that prints half of a string, followed by a new line.
| `8-print_array.c` | [8-print_array.c](8-print_array.c) | Write a function that prints n elements of an array of integers, followed by a new line.
| `9-strcpy.c` | [9-strcpy.c](9-strcpy.c) | Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
| `100-atoi.c` | [100-atoi.c](100-atoi.c) | Write a function that convert a string to an integer.
| `101-keygen.c` | [101-keygen.c](101-keygen.c) | Create a program that generates random valid passwords for the program 101-crackme.

## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)