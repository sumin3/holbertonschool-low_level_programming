#include "binary_trees.h"
size_t find_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int check_child(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: return 1 if a tree is perfect, otherwise, return 0.
 * If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && (binary_tree_balance(tree) == 0))
	{
		return (binary_tree_is_perfect(tree->left));
	}
	if (tree->right && (binary_tree_balance(tree) == 0))
	{
		return (binary_tree_is_perfect(tree->right));
	}
	return (1);
}
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
