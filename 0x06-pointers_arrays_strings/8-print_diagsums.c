#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the two diagonals of a suqare matrix of
 * integers
 * @a: the matrix array
 * @size: the size of array
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum = 0, sum2 = 0, add = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		add = (size + 1) * i;
		sum = sum + *(a + add);
	}
	printf("%d, ", sum);
	for (j = 0; j < size; j++)
	{
		add2 = j * (size - 1);
		sum2 = sum2 + *(a + add2);
	}
	printf("%d\n", sum2);

}
