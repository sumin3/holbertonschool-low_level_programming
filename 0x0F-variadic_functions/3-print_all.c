#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_all - prints anything
 * @format: a list of type arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *tmp;

	/* initialize list */
	va_start(list, format);
	/* access all the arguments assigned to list */
	while (format[i] != '\0')
	{
		/* print the argument with the match data type */
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			tmp = va_arg(list, char *);
			if (tmp == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", tmp);
			break;
		default: /* if not match, compare the next character */
			i++;
			continue;
		}
		/* print ', ' follow by each argument, except the last one */
		if (format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	/* clean memory reserved for list */
	va_end(list);
	printf("\n");


}
