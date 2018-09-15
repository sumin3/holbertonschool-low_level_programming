#include "lists.h"
/**
 * get_dnodeint_at_index - find the nth node of a dlistint_t linked list.
 * @head: pointer point to the head of linked list
 * @index: number of index
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	while (i < index && tmp)
	{
		i++;
		tmp = tmp->next;
	}
	if (i > index)
		return (NULL);
	return (tmp);
}
