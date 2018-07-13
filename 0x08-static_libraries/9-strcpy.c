#include "holberton.h"
/**
 * *_strcpy - copy the string pointed to by src
 * @src: the string need to copy
 * @dest: the buff pointed to by dest
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * _strlen - return the length of a string
 * @s:the string that need to find the length
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
