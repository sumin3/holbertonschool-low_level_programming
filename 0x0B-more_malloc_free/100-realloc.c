#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated with a call
 * to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: the pointer to the new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_array;
	unsigned int i, j;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_array = malloc(new_size);
	if (new_array == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_array[i] = *((char *)ptr + i);
	}
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
			new_array[i] = *((char *)ptr + j);
	}
	return (new_array);
}
