#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Write a function that reverses a string.
 * @s: the string that need to reverse
 */
void rev_string(char *s)
{
	int length = 0, index;
	int i = 0, len;
	char tmp;

	while (s[length] != '\0')
		length++;
	len = length / 2;
	for (index = length - 1; index >= len; index--)
	{
		tmp = s[index];
		s[index] = s[i];
		s[i] = tmp;
		i++;
	}
}
