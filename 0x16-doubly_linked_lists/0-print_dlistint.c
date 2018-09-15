#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer that points to the head of list
 * Return: return the number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	int num = 0;

	if (h == NULL)
		return (0);
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		num++;
	}
	return (num);
}
