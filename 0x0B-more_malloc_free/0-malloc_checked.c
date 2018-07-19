#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of memory space
 * Return: if malloc fails, the malloc_checked function should cause normal
 * process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *mal;
	/* malloc space for mal */
	mal = malloc(b);
	/* if malloc space fail exit 98 */
	if (mal == NULL)
		exit(98);
	return (mal);
}
