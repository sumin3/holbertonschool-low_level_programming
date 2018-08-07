#include "lists.h"
/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer that points to the address of head node of list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = NULL;
	next_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;/* move next node forward*/
		(*head)->next = prev_node;/* change direction/point backward*/
		prev_node = *head;/* after change dir,move prev_node forward */
		*head = next_node; /* move head forward */
	}
	*head = prev_node;/* change head points to prev_node instead of NULL */
	return (*head);
}
