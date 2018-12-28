<img src="https://www.holbertonschool.com/holberton-logo-twitter-card.png">

# 0x1C. C - Binary trees
Low-level programming & Algorithm ― Data structures and Algorithms

## Contents
* [Purpose](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#Purpose)
* [Coding style](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#Coding-style)
* [Installation](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#installation)
* [Usage](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#usage)
* [Usage Example](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#Usage-Example)
* [Files](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#Files)
* [Author](https://github.com/sumin3/holbertonschool-low_level_programming/tree/master/0x1C-binary_trees#author)

## Purpose
- To learn What is a binary tree
- To learn What are the depth, the height, the size of a binary tree
- To learn What are the different traversal methods to go through a binary tree
- To learn What is a complete, a full, a perfect, a balanced binary tree

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
cd 0x1C-binary_trees
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
| `0-binary_tree_node.c` | [0-binary_tree_node.c](0-binary_tree_node.c) | creates a binary tree node
| `1-binary_tree_insert_left.c` | [1-binary_tree_insert_left.c](1-binary_tree_insert_left.c) |  inserts a node as the left-child of another node
| `2-binary_tree_insert_right.c` | [2-binary_tree_insert_right.c](2-binary_tree_insert_right.c) | inserts a node as the right-child of another node
| `3-binary_tree_delete.c` | [3-binary_tree_delete.c](3-binary_tree_delete.c) |  deletes an entire binary tree
| `4-binary_tree_is_leaf.c` | [4-binary_tree_is_leaf.c](4-binary_tree_is_leaf.c) | checks if a node is a leaf
| `5-binary_tree_is_root.c` | [5-binary_tree_is_root.c](5-binary_tree_is_root.c) | checks if a given node is a root
| `6-binary_tree_preorder.c`| [6-binary_tree_preorder.c](6-binary_tree_preorder.c) | goes through a binary tree using pre-order traversal
| `7-binary_tree_inorder.c`| [7-binary_tree_inorder.c](7-binary_tree_inorder.c) | goes through a binary tree using in-order traversal
| `8-binary_tree_postorder.c` | [8-binary_tree_postorder.c](8-binary_tree_postorder.c) | goes through a binary tree using post-order traversal
| `9-binary_tree_height.c` | [9-binary_tree_height.c](9-binary_tree_height.c) | measures the height of a binary tree
| `10-binary_tree_depth.c` | [10-binary_tree_depth.c](10-binary_tree_depth.c) | measures the depth of a node in a binary tree
| `11-binary_tree_size.c` | [11-binary_tree_size.c](11-binary_tree_size.c) | measures the size of a binary tree
| `12-binary_tree_leaves.c` | [12-binary_tree_leaves.c](12-binary_tree_leaves.c) | counts the leaves in a binary tree
| `13-binary_tree_nodes.c` | [13-binary_tree_nodes.c](13-binary_tree_nodes.c) | counts the nodes with at least 1 child in a binary tree
| `14-binary_tree_balance.c` | [14-binary_tree_balance.c](14-binary_tree_balance.c) | measures the balance factor of a binary tree
| `15-binary_tree_is_full.c`| [15-binary_tree_is_full.c](15-binary_tree_is_full.c) | checks if a binary tree is full
| `16-binary_tree_is_perfect.c`| [16-binary_tree_is_perfect.c](16-binary_tree_is_perfect.c) |checks if a binary tree is perfect
| `17-binary_tree_sibling.c` | [17-binary_tree_sibling.c](17-binary_tree_sibling.c) | finds the sibling of a node
| `18-binary_tree_uncle.c` | [18-binary_tree_uncle.c](18-binary_tree_uncle.c) |  finds the uncle of a node
| `100-binary_trees_ancestor.c` | [100-binary_trees_ancestor.c](100-binary_trees_ancestor.c) | dfinds the lowest common ancestor of two nodes
| `101-binary_tree_levelorder.c` | [101-binary_tree_levelorder.c](101-binary_tree_levelorder.c) | goes through a binary tree using level-order traversal


## Author
Sumin Yu - [Twitter: @3_sumin](https://twitter.com/3_sumin)