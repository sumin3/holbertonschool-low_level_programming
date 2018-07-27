#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between numbers
 * @n: the number of string passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *tmp_string;

	if (separator == NULL)
		return;
	/* initialize string_list for n number of arguments */
	va_start(string_list, n);
	/* access all the arguments assigned to string_list */
	for (i = 0; i < n; i++)
	{
		tmp_string = va_arg(string_list, char *);
		if (tmp_string == NULL)
			printf("(nil)");
		printf("%s", tmp_string);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	/* clean memory reserved for string_list */
	va_end(string_list);

}
