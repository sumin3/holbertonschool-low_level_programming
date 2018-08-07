#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer points to the address of head node of a list
 * @idx: the index of the list where the new node should be added.
 * @n: the value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node, *new_node, *tmp_node;

	if (*head == NULL)
		return (NULL);
	current_node = *head;
	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}
	while (current_node->next != NULL && i + 1 < idx)
	{
		current_node = current_node->next;
		i++;
	}
	if (i + 1 == idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		tmp_node = current_node->next;
		current_node->next = new_node;
		new_node->next = tmp_node;
		return (new_node);
	}
	else
		return (NULL);
}
/**
 * add_nodeint - add new node to the beginning of list
 * @head: structure pointer for list
 * @n: the new node that need to add
 * Return: return the address of new elements, or NULL if it fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* new node that add to the beginning of list */

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
