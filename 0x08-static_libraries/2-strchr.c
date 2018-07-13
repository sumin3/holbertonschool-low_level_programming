#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: the string that use for locating a character
 * @c: the first occurrence character in string s
 * Return: return a pointer to the first occurrence of the character c
 * in the string s.
 */
char *_strchr(char *s, char c)
{
	int len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
			return (s + len);
		len++;
	}
	if (c == '\0')
		return (s + len);
	return ('\0');
}
