#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of element of an array
 * @size: the bytes size of an array
 * Return: returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cal = malloc(size * nmemb);
	if (cal == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		cal[i] = 0;
	return (cal);
}
