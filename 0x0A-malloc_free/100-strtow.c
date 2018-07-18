#include "holberton.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: the string need to split
 * Return: return a pointer to an array of string (Words)
 */
char **strtow(char *str)
{
	char **s;
	int len = 0, i = 0, j = 0, sub_len = 0, k = 0, a = 0, c = 0, b = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if(str[i + 1] != ' ')
				len++;
		}
		i++;
	}
	s = malloc(sizeof(char *) * len);
	if (s == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] != ' ')
		{
			for ( ; str[j] != ' '; j++)
				sub_len++;
			s[k] = malloc(sizeof(char) * sub_len);
			if (s[k] == NULL)
			{
				while (k >= 0)
				{
					free(s[k - 1]);
					k--;
				}
				free(s);
				return (NULL);
			}
		}
		sub_len = 0;
		k++;
	}
	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] != ' ')
		{
			s[a][b] = str[c];
			b++;
		}
		if (str[c] == ' ' && str[c + 1] != ' ')
		{

			a++;
			b = 0;
		}
	}
	return (s);

}
