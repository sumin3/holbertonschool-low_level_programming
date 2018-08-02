#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int _strlen(const char *s);
/**
 * add_node - add new node to the beginning of list
 * @head: structure pointer for list
 * @str: the new node that need to add
 * Return: return the address of new elements in list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* new node that add to the beginning of list */

	/* if no existing node */
	if (*head == NULL)
	{
		/* allocate space for the first node - head */
		*head = malloc(sizeof(list_t));
		if (*head == NULL)
			return (NULL);
		/* copy str and check the return copy of str*/
		/* if not null, assign the member len to the length of str */
		(*head)->str = strdup(str);
		if ((*head)->str != NULL)
			(*head)->len = _strlen(str);
		/* if null, the member len is 0 */
		else
			(*head)->len = 0;
		/* set next node point to null (linked list end at null)*/
		(*head)->next = NULL;
	}
	/* if existing node */
	else
	{
		/* allocate space for the new node */
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);
		if  (new_node->str != NULL)
			new_node->len = _strlen(str);
		else
			new_node->len = 0;
		/* set next node point to head */
		new_node->next = *head;
		/* set new node to head */
		*head = new_node;
	}
	return (*head);
}
/**
 * _strlen - return the length of a string
 * @s:the string that need to find the length
 * Return: return the length of the string
*/
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
