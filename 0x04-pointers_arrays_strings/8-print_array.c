#include <stdio.h>
/**
 * print_array - print n elements of an array of integers.
 * @a: the array that uses to find the element
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
