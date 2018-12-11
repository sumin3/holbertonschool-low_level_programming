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
	if (tree && (binary_tree_balance(tree) == 0) && check_child(tree))
		return (1);
	return (0);
}

/**
 * check_child - check if the node of the tree has two chils or not
 * @tree: a pointer to the root node of the tree to measure the balance factor
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
