#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string.
 * @str: the string that need to print
 */
void puts2(char *str)
{
	int length = 0, i;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
