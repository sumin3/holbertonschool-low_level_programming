#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: size of a binary tree, If tree is NULL, the function must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		if (tree->left || tree->right)
			return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
	return (0);
}
