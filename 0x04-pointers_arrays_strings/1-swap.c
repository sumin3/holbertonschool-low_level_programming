#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the integers that need to swap
 * @b: the integers that need to swap
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
