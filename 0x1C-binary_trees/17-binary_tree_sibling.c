#include "binary_trees.h"
/**
 * binary_tree_sibling -  inds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: return sibling node pointer, otherwise, return NULL.
 * If node is NULL or the parent is NULL, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		return (node->parent->left);
	}
	return (NULL);
}
