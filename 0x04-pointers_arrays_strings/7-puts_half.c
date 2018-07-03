#include "holberton.h"
/**
 * puts_half - print the second half of the string
 * @str: the string that need to cut into two parts.
 */
void puts_half(char *str)
{
	int length = 0, i, len;

	while (str[length] != '\0')
		length++;
	if (length % 2 != 0)
		length = length - 1;
	len = length / 2;
	for (i = len; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
