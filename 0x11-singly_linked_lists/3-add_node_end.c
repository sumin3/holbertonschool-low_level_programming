#include "lists.h"

int _strlen(const char *s);
/**
 * add_node_end - add new node to the end of list
 * @head: structure pointer for list
 * @str: the new node that need to add
 * Return: return the address of new elements in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node; /* new node that add to the end of list */
	list_t *current_node;

	current_node = *head;/* tmp node to aviod change the address of head */
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
		new_node = *head;
		new_node->next = NULL;
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
		/* find the end node of list by keep moving the current node*/
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		/* set next node of end node  to new node */
		current_node->next = new_node;
		/* set next node of new node to null */
		new_node->next = NULL;
	}
	return (new_node);
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
