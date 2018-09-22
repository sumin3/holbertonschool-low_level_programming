# 0x0A. C - malloc, free
Low-level programming & Algorithm ― Hatching out

## Purpose
- To learn how to use malloc and free
- To learn how to use `valgrind` to check for memory leak
- To learn the difference between automatic and dynamic allocation

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
cd 0x0A-malloc_free
```
After change current working directory to **0x0A-malloc_free** directory, issue the following command to compile

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
0 | 0-create_array.c, *0-main.c* | creates an array of chars, and initializes it with a specific char.
1 | 1-strdup.c, *1-main.c* | returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2 | 2-str_concat.c, *2-main.c* | concatenates two strings.
3 |  3-alloc_grid.c, *3-main.c* |  returns a pointer to a 2 dimensional array of integers.
4 | 4-free_grid.c, *4-main.c* |  frees a 2 dimensional grid previously created by your alloc_grid function.
5 | 5-argstostr.c, *5-main.c* | concatenates all the arguments of your program.
6 | 100-strtow.c, *100-main.c* | splits a string into words.

* All main.c files in *Italic characters* are provided by [Holberton School](https://www.holbertonschool.com/) 
## Authors
Sumin Yu