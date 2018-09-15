#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer points to the head of linked list
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node
 * Return: return the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new = NULL, *tmp = NULL;
	unsigned int i = 0;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (i < idx && cur)
	{
		i++;
		cur = cur->next;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = cur;
	tmp = cur->prev->next;
	cur->prev->next = new;
	new = tmp;
	cur->prev = new;

	return (new);

}
