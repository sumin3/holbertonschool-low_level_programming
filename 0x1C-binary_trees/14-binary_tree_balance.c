#include "binary_trees.h"
size_t find_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of a binary tree, If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree && (tree->left || tree->right))
	{
		l_height = find_height(tree->left);
		r_height = find_height(tree->right);
		if (tree->left)
			l_height++;
		if (tree->right)
			r_height++;
		return (l_height - r_height);
	}
	return (0);
}
/**
 * find_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t find_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree && (tree->left || tree->right))
	{
		l_height = find_height(tree->left) + 1;
		r_height = find_height(tree->right) + 1;
	}
	return (l_height >= r_height ? l_height : r_height);
}
