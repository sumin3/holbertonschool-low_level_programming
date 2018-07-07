#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @dest: the string need to concatenated
 * @src: the string need to concatenated
 * Return: return a pointer to the resultring string dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i, j = 0;

	while (dest[len1++] != '\0')
		;
	while (src[len2++] != '\0')
		;
	for (i = len1 - 1; i <= (len1 - 1) + len2; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return ((char *)dest);
}
