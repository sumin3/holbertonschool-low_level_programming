#include "lists.h"
/**
 * free_dlistint - free a list
 * @head: pointer that points to the address of head of list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
