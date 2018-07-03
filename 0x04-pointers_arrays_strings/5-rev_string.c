#include "holberton.h"
/**
 * rev_string - Write a function that reverses a string.
 * @s: the string that need to reverse
 */
void rev_string(char *s)
{
	int i = 0, length = 0, index = 0;

	while (s[length] != '\0')
		length++;
	for (index = length; index >= 0; index--)
	{
		s[i] = s[index - 1];
		i++;
	}
}
