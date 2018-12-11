#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: is a pointer to the node to find the uncle
 * Return: return a pointer to the uncle node
 * If node is NULL, return NULL
 * If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left != node->parent)
			return (node->parent->parent->left);
		if (node->parent->parent->right != node->parent)
			return (node->parent->parent->right);
	}
	return (NULL);
}
