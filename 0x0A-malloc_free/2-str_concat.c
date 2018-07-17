#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: the string need to concatenate
 * @s2: the string need to concatenate
 * Return: return the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i, j, k = 0;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		if (s1 == NULL)
			return (NULL);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		if (s2 == NULL)
			return (NULL);
		*s2 = '\0';
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concat = malloc(sizeof(char) * (len1 + (len2 + 1)));
	if (concat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = i; j <= len1 + len2 + 1; j++)
	{
		concat[j] = s2[k];
		k++;
	}
	return (concat);
}
