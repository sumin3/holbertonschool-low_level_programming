#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: the min value
 * @max: the max value
 * Return: return the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, tmp = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	tmp = min;
	for (i = 0; i < (max - min + 1); i++)
	{
		array[i] = tmp;
		tmp++;
	}
	return (array);
}
