#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * @s: the string that need to print in reverse
 */
void print_rev(char *s)
{
	int length = 0, index = 0;

	while (s[length] != '\0')
		length++;
	for (index = length - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');

}
