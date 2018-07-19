#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string that need to concatenate
 * @s2: string that need to concatenate
 * @n: n is the number of bytes of s2 that need to concatenate
 * Return: return the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;
	/* if null is passed, set it as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find len for s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n <= len2)
		len2 = n;
	/* malloc empty space for concat */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);
	/* copy string */
	for (i = 0; i < len1 + len2 + 1; i++)
	{
		if (i < len1)
			concat[i] = s1[i];
		else
			concat[i] = s2[i - len1];
	}
	return (concat);
}
