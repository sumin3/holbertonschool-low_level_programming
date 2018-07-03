#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line to stdout
 * @str: the string that need to print
 */
void _puts(char *str)
{
	int index;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
