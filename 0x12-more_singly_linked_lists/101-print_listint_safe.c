#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer that points to the address of head of list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int num_element = 0, i = 0, adr_tmp;
	listint_t *adr = NULL, *tmp;
	const void *adr_head = NULL;

	adr = malloc(sizeof(listint_t));
	if (adr == NULL)
		exit(98);
	if (head == NULL)
		exit(98);
	tmp = adr;
	while (head != NULL)
	{
		adr_head = head;
		adr->n = adr_head;
		adr_tmp = adr->n;
		while (i < num_element)
		{
			if (adr_tmp == tmp->n)
			{
				printf("->[%p] %d\n", adr_head, head->n);
				return (num_element);
			}
			tmp = tmp->next;
			i++;
		}
		printf("[%p] %d\n", adr_head, head->n);
		head = head->next;
		adr = adr->next;
		num_element++;

	}
	return (num_element);
}
