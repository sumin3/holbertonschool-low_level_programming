#include "binary_trees.h"
size_t find_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor of a binary tree, If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (find_height(tree->left) - find_height(tree->right));
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

	if (tree)
	{
		l_height = find_height(tree->left) + 1;
		r_height = find_height(tree->right) + 1;
	}
	return (l_height >= r_height ? l_height : r_height);
}
