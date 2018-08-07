#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: structure pointer for list
 * Return: return the number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	int num_element = 0;

	while (h != NULL)
	{
		h = h->next;
		num_element++;
	}
	return (num_element);
}
