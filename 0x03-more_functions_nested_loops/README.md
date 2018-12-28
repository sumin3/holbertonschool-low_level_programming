<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x03. C - More functions, more nested loops
Low-level programming & Algorithm ― Hatching out

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x03-more_functions_nested_loops#author)

## Purpose
- To learn What are nested loops and how to use them
- To learn What is a function and how do you use functions
- To learn What is the difference between a declaration and a definition of a function
- To learn What is a prototype
- To learn What are the gcc flags -Wall -Werror -pedantic -Wextra
- To learn What are header files and how to to use them with #include

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
cd 0x03-more_functions_nested_loops
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
| `0-isupper.c` | [0-isupper.c](0-isupper.c) | Write a function that checks for uppercase character.
| `1-isdigit.c` | [1-isdigit.c](1-isdigit.c) | Write a function that checks for a digit (0 through 9).
| `2-mul.c` | [2-mul.c](2-mul.c) | Write a function that multiplies two integers.
| `3-print_numbers.c` | [3-print_numbers.c](3-print_numbers.c) |  Write a function that prints the numbers, from 0 to 9, followed by a new line.
| `4-print_most_numbers.c` | [4-print_most_numbers.c](4-print_most_numbers.c) | Write a function that prints the numbers, from 0 to 9, followed by a new line.
| `5-more_numbers.c` | [5-more_numbers.c](5-more_numbers.c) | Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
| `6-print_line.c`| [6-print_line.c](6-print_line.c) | Write a function that draws a straight line in the terminal.
| `7-print_diagonal.c`| [7-print_diagonal.c](7-print_diagonal.c) | Write a function that draws a diagonal line on the terminal.
| `8-print_square.c` | [8-print_square.c](8-print_square.c) | Write a function that prints a square, followed by a new line.
| `9-fizz_buzz.c` | [9-fizz_buzz.c](9-fizz_buzz.c) | Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
| `10-print_triangle.c` | [10-print_triangle.c](10-print_triangle.c) |Write a function that prints a triangle, followed by a new line.
| `100-prime_factor.c` | [100-prime_factor.c](100-prime_factor.c) | Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.
| `101-print_number.c` | [101-print_number.c](101-print_number.c) |Write a function that prints an integer.


## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)