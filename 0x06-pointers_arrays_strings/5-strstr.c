#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - find the firs occurrence of the substring needle in the string
 * @haystack: the string that use for seaching.
 * @needle: the first occurrence string
 * Return: return a pointer to the beginning of the located substring,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, find_1st, match = 0, len = 0;

	while (needle[len++] != '\0')
		;
	if (len == 0)
		return (haystack);
	for (i = match; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			find_1st = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
				{
					match = 1;
				}
				else
				{
					match = 0;
					break;
				}
			}
			if (match == 1)
				return (haystack + find_1st);
		}
	}
	return ('\0');
}
