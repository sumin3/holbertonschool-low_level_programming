#include "lists.h"
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
