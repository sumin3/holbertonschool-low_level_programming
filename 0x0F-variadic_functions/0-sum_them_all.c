#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * sum_them_all - find the sum of all its parameters
 * @n: 1st number (parameter)
 * Return: return the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);
	/* initialize num_list for n number of arguments */
	va_start(num_list, n);
	/* access all the arguments assigned to num_list */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num_list, int);
	}
	/* clean memory reserved for num_ist */
	va_end(num_list);
	return (sum);
}
