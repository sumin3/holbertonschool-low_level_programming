#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a new node at a given position.
 * @head: pointer points to the head of linked list
 * @index: index of the list where the new node should be added.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *cur = *head, *new = NULL, *tmp = NULL;
        unsigned int i = 0;

        while (i < index && cur)
        {
                i++;
                cur = cur->next;
        }
        if (i != index)
                return (-1);
	current->prev->next = cur->next;
        tmp = cur->prev->next;
        cur->prev->next = new;
	return (new);

}
