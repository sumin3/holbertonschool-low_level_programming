#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list.
 * @head: pointer points to the head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head;
	int sum = 0;

	if (!head)
		return (sum);
	while (cur)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
