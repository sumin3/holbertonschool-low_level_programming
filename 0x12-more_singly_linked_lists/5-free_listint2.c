#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer point to the first node of list
 */
void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	*head = NULL;
}
