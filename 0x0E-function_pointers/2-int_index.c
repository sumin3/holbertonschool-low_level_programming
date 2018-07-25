#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searchs for an integer
 * @array: a pointer to the array
 * @size: the number of elements in the array array
 * @cmp: a pointer to the function.
 * Return: return -1 if no element match. if size <= 0, return -1.
 * return the index of the first element for which the cmp function
 * does not rerurn 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index; /* index of a array */

	/* return -1 if size is less than or equal zero */
	if (size <= 0)
		return (-1);
	/* if array and cmp are vaild */
	if (array && cmp)
	{
		/* loop the array size times to find match element*/
		for (index = 0; index < size; index++)
		{
			/* if match, return the index of the element */
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	/* if not match, return -1 */
	return (-1);
}
