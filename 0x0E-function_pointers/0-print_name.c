#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: the name that need to print
 * @f: pointer to function that prints a name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
		f(name);
}
