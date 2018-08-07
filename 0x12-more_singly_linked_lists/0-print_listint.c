#include "lists.h"
/**
 * print_listint - prints all the elements of a list_t list
 * @h: pointer
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int num_element = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_element++;
	}
	return (num_element);
}
