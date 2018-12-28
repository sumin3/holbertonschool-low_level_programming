<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x00. C - Hello, World
Low-level programming & Algorithm ― Hatching out

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x00-hello_world#author)

## Purpose
- To learn How to print text using printf, puts and putchar
- To learn How to get the size of a specific type using the unary operator sizeof
- To learn How to compile using gcc
- To learn How does the main function influence the return value of the program

## Coding style
- All C files are compiled on Ubuntu 14.04 LTS and using [Betty Style](https://\github.com/holbertonschool/Betty) for checking coding and documentation styles.

## Installation
To use, first download  this repository into your local machine by issuing the following command in your local terminal. 
```
git clone https://github.com/sumin3/holbertonschool-low_level_programming.git
```

#### Change Directory
```
cd 0x00-hello_world
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
$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-compiler -o 1-isdigit
$ ./1-isdigit 
0: 1
a: 0
```

## Files
|File| File Hierarchy  | Description
|---|----|-----
| `0-preprocessor` | [0-preprocessor](0-preprocessor) | Write a script that runs a C file through the preprocessor and save the result into another file.
| `1-compiler` | [1-compiler](1-compiler) | Write a script that compiles a C file but does not link.
| `2-assembler` | [2-assembler](2-assembler) | Write a script that generates the assembly code of a C code and save it in an output file.
| `3-name` | [3-name](3-name) |  Write a script that compiles a C file and creates an executable named cisfun
| `4-puts.c` | [4-puts.c](4-puts.c) | Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
| `5-printf.c` | [5-printf.c](5-printf.c) |Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
| `6-size.c`| [6-size.c](6-size.c) | Write a C program that prints the size of various types on the computer it is compiled and run on.
| `100-intel`| [100-intel](100-intel) | Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
| `101-quote.c` | [101-quote.c](101-quote.c) | Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.


## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)
