#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer that points to the address of head node of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node, *tmp_node;

	current_node = *head;
	tmp_node = *head;
	while (current_node->next != NULL)
	{
		current_node = tmp_node;
		current_node->next = tmp_node;
		current_node = current_node->next;
	}
	return (*head);
}
