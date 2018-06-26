#include "holberton.h"
#include <stdio.h>
/**
 * sum_multiple_3_5 - list all the natural numbers below n that are multiples
 * of 3 or 5
 * @n: the limit number
 * Return: no return
 */
void sum_multiple_3_5(int n)
{
	int sum = 0;

	for (n = n - 1; n >= 0; n--)
	{
		if ((n % 3) == 0)
			sum = sum + n;
		if ((n % 5) == 0)
			sum = sum + n;
	}
	printf("%d\n", sum);
}
