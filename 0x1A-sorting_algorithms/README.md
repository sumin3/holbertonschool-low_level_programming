<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x1A. C - Sorting algorithms & Big O
Low-level programming & Algorithm ― Data structures and Algorithms

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1A-sorting_algorithms#author)

## Purpose
- To learn different sorting algorithms
- To learn What is the Big O notation, and how to evaluate the time complexity of an algorithm
- To learn How to select the best sorting algorithm for a given input
- To learn What is a stable sorting algorithm

## Coding style
- All C files are compiled on Ubuntu 14.04 LTS and using [Betty Style](https://\github.com/holbertonschool/Betty) for checking coding and documentation styles.

## Installation
To use, first download  this repository into your local machine by issuing the following command in your local terminal. 
```
git clone https://github.com/sumin3/holbertonschool-low_level_programming.git
```
#### Change Directory
```
cd 0x1A-sorting_algorithms
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
| `0-bubble_sort.c` <br /> `0-O`| [0-bubble_sort.c](0-bubble_sort.c) <br /> [0-O](0-O) | sorts an array of integers in ascending order using the Bubble sort algorithm
| `1-insertion_sort_list.c` <br /> `1-O`| [1-insertion_sort_list.c](1-insertion_sort_list.c) <br /> [1-O](1-O) |  sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm
| `2-selection_sort.c`<br /> `2-O` | [2-selection_sort.c](2-selection_sort.c) <br /> [2-O](2-O) |  sorts an array of integers in ascending order using the Selection sort algorithm
| `3-quick_sort.c` <br /> `3-O`| [3-quick_sort.c](3-quick_sort.c)<br /> [3-O](3-O) | sorts an array of integers in ascending order using the Quick sort algorithm
| `100-shell_sort.c` | [100-shell_sort.c](100-shell_sort.c) |  sorts an array of integers in ascending order using the Shell sort algorithm, using the Knuth sequence
| `101-cocktail_sort_list.c` <br /> `101-O`| [101-cocktail_sort_list.c](101-cocktail_sort_list.c) <br /> [101-O](101-O)| sorts a doubly linked list of integers in ascending order using the Cocktail shaker sort algorithm
| `102-counting_sort.c`<br /> `102-O`| [102-counting_sort.c](102-counting_sort.c) <br /> [102-O](102-O)| sorts an array of integers in ascending order using the Counting sort algorithm
| `103-merge_sort.c`<br /> `103-O`| [103-merge_sort.c](103-merge_sort.c) <br /> [103-O](103-O)| sorts an array of integers in ascending order using the Merge sort algorithm
| `104-heap_sort.c` <br /> `104-O`| [104-heap_sort.c](104-heap_sort.c) <br /> [104-O](104-O)|  sorts an array of integers in ascending order using the Heap sort algorithm
| `105-radix_sort.c` <br /> `105-O`| [105-radix_sort.c](105-radix_sort.c) <br /> [105-O](105-O) | sorts an array of integers in ascending order using the Radix sort algorithm
| `106-bitonic_sort.c`<br /> `106-O` | [106-bitonic_sort.c](106-bitonic_sort.c) <br /> [106-O](106-O)| sorts an array of integers in ascending order using the Bitonic sort algorithm
| `107-quick_sort_hoare.c` | [107-quick_sort_hoare.c](107-quick_sort_hoare.c) | sorts an array of integers in ascending order using the Quick sort algorithm

#### time complexity notations are in order: best case, average case, and worst case

## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)





