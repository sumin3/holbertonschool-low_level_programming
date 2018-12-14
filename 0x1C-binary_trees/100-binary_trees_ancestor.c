
#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second: is a pointer to the second node
 * Return: return a pointer to the lowest common ancestor node of the
 * two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	int first_depth, second_depth;
	binary_tree_t *tmp = NULL;

	if (!first || !second)
		return (NULL);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	if (first_depth > second_depth)
	{
		tmp = (binary_tree_t *) first;
		while (tmp != second->parent)
		{
			if (tmp == second)
				break;
			tmp = tmp->parent;
		}
	}
	else if (second_depth > first_depth)
	{
		tmp = (binary_tree_t *) second;
		while (tmp != first->parent)
		{
			if (tmp == first)
				break;
			tmp = tmp->parent;
		}
	}
	else
		tmp = first->parent;
	return (tmp);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: Return depth. If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
