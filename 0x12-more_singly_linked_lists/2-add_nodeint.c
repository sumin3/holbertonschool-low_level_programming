#include "lists.h"
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
