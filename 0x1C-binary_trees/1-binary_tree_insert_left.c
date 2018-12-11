#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value:  the value to store in the new node
 * Return: return a pointer to the created node
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;
	binary_tree_t *tmp = NULL;

	tmp = parent->left;
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		tmp->parent = new_node;
		new_node->left = tmp;
	}
	else
	{
		new_node->left = NULL;
	}
	parent->left = new_node;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->n = value;
	return (new_node);
}
