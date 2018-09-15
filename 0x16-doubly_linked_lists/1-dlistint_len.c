#include "lists.h"
/**
 * dlistint_len - fine the number of elements in a linked list
 * @h: pointer that points to the address of head of linked list
 * Return: returns the number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
