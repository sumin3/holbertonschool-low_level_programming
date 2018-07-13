#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string that we use for searching
 * @accept: the substring that we search for.
 * Return: return the number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, len = 0, prev_len = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				len++;
		}
		if (len == prev_len)
			return (len);
		prev_len = len;
		i++;
	}
	return (len);
}
