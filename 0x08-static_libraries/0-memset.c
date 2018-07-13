#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the string that need to printed
 * @b: the constant byte that need to fill
 * @n: the the number of times need to fill
 * Return: returns a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
