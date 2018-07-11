#include "holberton.h"
/**
 * _puts_recursion - prints a string, follow by a new line
 * @s: the string that need to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
