#include "holberton.h"
/**
 * _memcpy - copy n byte memory area src to memory area dest
 * @src: the string that need to copy
 * @dest: the copied string
 * @n: the number of byte need to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
