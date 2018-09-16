#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a new node at a given position.
 * @head: pointer points to the head of linked list
 * @index: index of the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur = *head, *tmp = NULL, *tmp1 = NULL;
	unsigned int i = 0;

	if ((*head) == NULL || head == NULL)
		return (-1);
	if (index == 0 && (*head) != NULL)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; i < index && cur; i++)
		cur = cur->next;
	if (i == index)
	{
		if (cur->next == NULL)
		{
			cur->prev->next = NULL;
			free(cur);
			return (1);
		}
		tmp1 = cur->prev;
		tmp = cur->next;
		free(cur);
		cur = tmp;
		tmp1->next = cur;
		cur->prev = tmp1;
		return (1);
	}
	else
		return (-1);

}
