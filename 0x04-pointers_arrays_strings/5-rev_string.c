#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Write a function that reverses a string.
 * @s: the string that need to reverse
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	int i=0;
	char h[10];

	while (s[length] != '\0')
		length++;
	for (index = length - 1; index >= 0; index--)
	{
		h[i] = s[index];
		s[i] = h[i];
		i++;
	}
}
