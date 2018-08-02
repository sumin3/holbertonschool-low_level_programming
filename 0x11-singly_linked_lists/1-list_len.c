#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: structure pointer for list
 * Return: return the number of elements in list
 */
size_t list_len(const list_t *h)
{
	int num_element = 0;

	while (h != NULL)
	{
		h = h->next;
		num_element++;
	}
	return (num_element);
}
