#include "binary_trees.h"
int check_child(const binary_tree_t *tree);
/**
 * binary_tree_is_full -  checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: return 0 if not full, otherwise, return 1. If tree is NULL,
 * your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
		return (check_child(tree));
	return (0);
}

/**
 * check_child - check if the node of the tree has two chils or not
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: return 1 if has two childs, otherwise, return 0.
 * If tree is NULL, return 0
 */
int check_child(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (check_child(tree->left) && check_child(tree->right));
}
