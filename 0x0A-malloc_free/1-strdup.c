#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which is duplicate of the
 * string str
 * @str: the source string need to copy.
 * Return: return a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *d_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	d_str = malloc(sizeof(char) * (len + 1));
	if (d_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		d_str[i] = str[i];
	d_str[i] = '\0';
	return (d_str);
}
