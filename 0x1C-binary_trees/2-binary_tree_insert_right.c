#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value:  the value to store in the new node
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	tmp = parent->right;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		tmp->parent = new_node;
		new_node->right = tmp;
	}
	else
	{
		new_node->right = NULL;
	}
	parent->right = new_node;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->n = value;
	return (new_node);
}
