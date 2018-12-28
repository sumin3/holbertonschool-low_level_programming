<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x1B. C - Makefiles
Low-level programming & Algorithm ― Hatching out

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1B-makefiles#author)

## Purpose
- To learn What, When, why and how to use Makefiles
- To learn What are a rules and how to set and use them
- To learn What are explicit and implicit rules

## Coding style
- All C files are compiled on Ubuntu 14.04 LTS and using [Betty Style](https://\github.com/holbertonschool/Betty) for checking coding and documentation styles.
- All text files are tested on Ubuntu 14.04 LTS

## Installation
To use, first download  this repository into your local machine by issuing the following command in your local terminal. 
```
git clone https://github.com/sumin3/holbertonschool-low_level_programming.git
```
#### Change Directory
```
cd 0x1B-makefiles
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
| `0-Makefile` | [0-Makefile](0-Makefile) | **Makefile Requirements:** <br /> 1. name of the executable: holberton <br /> rules: all<br /> variables: none
| `1-Makefile` | [1-Makefile](1-Makefile) |  **Makefile Requirements:** <br /> 1. name of the executable: holberton <br /> rules: all<br /> variables: CC, SRC
| `2-Makefile` | [2-Makefile](2-Makefile) | **Makefile Requirements:** <br /> 1. name of the executable: holberton <br /> rules: all<br /> variables: CC, SRC, OBJ, NAME
| `3-Makefile` | [3-Makefile](3-Makefile) |  **Makefile Requirements:** <br /> 1. name of the executable: holberton <br /> rules: all, clean, oclean, fclean, re <br /> variables: CC, SRC, OBJ, NAME, RM
| `4-Makefile` | [4-Makefile](4-Makefile) | **Makefile Requirements:** <br /> 1. name of the executable: holberton <br /> rules: all, clean, fclean, oclean, re<br /> variables: CC, SRC, OBJ, NAME, RM, CFLAGS
| `5-island_perimeter.py` | [5-island_perimeter.py](5-island_perimeter.py) | Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid
| `100-Makefile`| [100-Makefile](100-Makefile) | **Makefile Requirements:** <br /> 1. name of the executable: holberton <br /> rules: all, clean, fclean, oclean, re<br /> variables: CC, SRC, OBJ, NAME, RM, CFLAGS <br />use $(RM) for the cleaning up rules <br /> Makefile should not compile if the header file m.h is missing


## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)