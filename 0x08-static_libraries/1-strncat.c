#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: the string need to concatenated
 * @src: the string need to concatenated
 * @n: use n bytes from src
 * Return: return a pointer to the resultring string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i, j = 0;

	while (dest[len1++] != '\0')
		;
	for (i = len1 - 1; i < (len1 - 1) + n && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i + 1] = '\0';
	return (dest);
}
