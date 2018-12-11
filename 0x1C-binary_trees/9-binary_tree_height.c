#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree && (tree->left || tree->right))
	{
		l_height = binary_tree_height(tree->left) + 1;
		r_height = binary_tree_height(tree->right) + 1;
	}
	return (l_height >= r_height ? l_height : r_height);
}
