#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_number - prints number
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	if (separator == NULL)
		return;
	/* initialize num_list for n number of arguments */
	va_start(num_list, n);
	/* access all the arguments assigned to num_list */
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num_list, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	/* clean memory reserved for num_list */
	va_end(num_list);

}
