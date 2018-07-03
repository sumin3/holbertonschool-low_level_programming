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
		len = (length - 1) / 2;
	else
		len = length / 2;
	for (i = len; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
