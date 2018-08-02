#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Return: return the number of nodes
 */
size_t print_list(const list_t *h)
{
	int num_element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", h->len);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_element++;
	}
	return (num_element);
}
