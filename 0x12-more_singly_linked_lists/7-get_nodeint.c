#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer points to the address of head node
 * @index: the index of the node, starting at 0
 * Return: return the nth node of a list, if the node not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node;

	if (head == NULL)
		return (NULL);
	current_node = head;
	while (current_node != NULL && i < index)
	{
		current_node = current_node->next;
		i++;
	}
	if (i == index)
		return (current_node);
	else
		return (NULL);
}
