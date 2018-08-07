#include "lists.h"
/**
 * add_nodeint_end - add new node to the end of list
 * @head: structure pointer for list
 * @n: the new node that need to add
 * Return: return the address of new elements in list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node; /* new node that add to the end of list */
	listint_t *current_node;

	current_node = *head;/* tmp node to aviod change the address of head */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (new_node);

}
