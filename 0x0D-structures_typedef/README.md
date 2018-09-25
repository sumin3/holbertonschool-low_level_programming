# 0x0D. C - Structures, typedef
Low-level programming & Algorithm ― Hatching out

## Purpose
- To learn what are structures, when, why and how to use them
- To learn how to use typedef

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
cd 0x0D-structures_typedef
```
After change current working directory to **0x0D-structures_typedef** directory, issue the following command to compile

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
0 | dog.h, *0-main.c* | Define a new type struct dog 
1 | 1-init_dog.c, *1-main.c* |Write a function that initialize a variable of type struct dog
2 | 2-print_dog.c, *2-main.c* |  prints a struct dog
3 | dog.h, *3-main.c* | Define a new type dog_t as a new name for the type struct dog.
4 | 4-new_dog.c, *4-main.c* | creates a new dog.
5 | 5-free_dog.c, *5-main.c* | frees dogs.

* All main.c files in *Italic characters* are provided by [Holberton School](https://www.holbertonschool.com/) 
## Authors
Sumin Yu