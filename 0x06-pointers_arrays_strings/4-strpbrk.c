#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - locate the firs occurrence in the string s of any of the bytes in
 * the string accept
 * @s: the string that use for seaching.
 * @accept: the first occurrence string
 * Return: return a pointer to the byte in s that match one of the bytes in
 * accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return ('\0');
}
