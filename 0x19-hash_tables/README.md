<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x19. C - Hash tables
Low-level programming & Algorithm ― Data structures and Algorithms

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x19-hash_tables#author)

## Purpose
- To learn What is a hash function
- To learn What is a hash table, how do they work and how to use them
- To learn What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- To learn What are the advantages and drawbacks of using hash tables
- To learn What are the most common use cases of hash tables

## Coding style
- All C files are compiled on Ubuntu 14.04 LTS and using [Betty Style](https://\github.com/holbertonschool/Betty) for checking coding and documentation styles.

## Installation
To use, first download  this repository into your local machine by issuing the following command in your local terminal. 
```
git clone https://github.com/sumin3/holbertonschool-low_level_programming.git
```

#### Change Directory
```
cd 0x19-hash_tables
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
| `0-hash_table_create.c` | [0-hash_table_create.c](0-hash_table_create.c) | creates a hash table.
| `1-djb2.c` | [1-djb2.c](1-djb2.c) |  Write a hash function implementing the djb2 algorithm.
| `2-key_index.c` | [2-key_index.c](2-key_index.c) | Write a function that gives you the index of a key.
| `3-hash_table_set.c` | [3-hash_table_set.c](3-hash_table_set.c) |  Write a function that adds an element to the hash table.
| `4-hash_table_get.c` | [4-hash_table_get.c](4-hash_table_get.c) | Write a function that retrieves a value associated with a key.
| `5-hash_table_print.c` | [5-hash_table_print.c](5-hash_table_print.c) | Write a function that prints a hash table.
| `6-hash_table_delete.c`| [6-hash_table_delete.c](6-hash_table_delete.c) | Write a function that deletes a hash table.



## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)