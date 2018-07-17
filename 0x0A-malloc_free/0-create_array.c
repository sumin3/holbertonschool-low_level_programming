#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars, and initializes it with
 * a specific char
 * @size: the size of memory to print
 * @c: the address of memory to print
 * Return: return NULL if size = 0, return a pointer to the array, or NULL if
 * fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
