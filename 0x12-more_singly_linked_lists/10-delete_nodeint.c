#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: pointer points to the address of head node of a list
 * @index: the index of the list where the node should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node, *tmp_node;

	if (*head == NULL)
		return (-1);
	current_node = *head;
	if (index == 0)
	{
		pop_listint(head);
		return (1);
	}
	while (current_node->next != NULL && i + 1 < index)
	{
		current_node = current_node->next;
		i++;
	}
	if (i + 1 == index)
	{
		tmp_node = current_node->next;
		current_node->next = tmp_node->next;
		free(tmp_node);
		return (1);
	}
	else
		return (-1);
}
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the address of the head node of a listint
 * Return: returns the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;
	return (tmp);
}
