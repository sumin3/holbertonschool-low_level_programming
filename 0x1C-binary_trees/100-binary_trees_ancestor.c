
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
	int diff_depth, first_depth, second_depth;

	if (!first || !second)
		return (NULL);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	diff_depth = first_depth - second_depth;
	diff_depth = diff_depth > 0 ? diff_depth : -diff_depth;
	while (first_depth > second_depth)
	{
		first = first->parent;
		first_depth--;
	}
	while (second_depth > first_depth)
	{
		second = second->parent;
		second_depth--;
	}
	while ((second->parent && first->parent) &&
	       (diff_depth != 0) && (first != second))
	{
		first = first->parent;
		second = second->parent;
		diff_depth--;
	}
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *) first->parent);
	return (NULL);
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
