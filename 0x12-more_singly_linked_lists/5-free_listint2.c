#include "lists.h"
/**
 * free_listint2 - free a list
 * @head: pointer point to the first node of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_node;

	tmp_node = *head;
	while (tmp_node != NULL)
	{
		free(tmp_node);
		tmp_node = tmp_node->next;
	}
	*head = NULL;
}
