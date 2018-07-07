#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array that need to reversed
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0, j = n - 1;

	while (i < j)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i++;
		j--;
	}
	a[n] = '\0';
}
