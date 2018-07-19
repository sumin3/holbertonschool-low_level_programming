#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a string into words
 * @str: the string need to split
 * Return: return a pointer to an array of string (Words)
 */
char **strtow(char *str)
{
	char **s;
	int word = 0, i = 0, j = 0, p = 0, k, char_in_word = 0;
	/* return NULL if string is empty */
	if (str == NULL)
		return (NULL);
	/* find how many words in a string */
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ')
				word++;
		}
		i++;
	}
	if (str[0] != ' ')
		word++;
	/* malloc space for column */
	s = (char **)malloc(sizeof(char *) * (word + 1));
	/* check if malloc space sucessfully or not */
	if (s == NULL)
		return (NULL);
	for (i = 0; str[j] != '\0'; i++)
	{
		/* do this if character is a space character */
		if (str[j] == ' ')
		{
			i--;/* i is the index of column */
			j++; /* j is the first index of each word */
		}
		/* do this if character is not a space character */
		else
		{
			/* find the len of a word */
			for (p = j; str[p] != '\0' && str[p] != ' '; p++)
				char_in_word++;
			/*printf("sub%d\n", char_in_word);*/
			/* malloc space for one row (one word) */
			s[i] = malloc(sizeof(char) * (char_in_word + 1));
			/* check if malloc space sucessfully or not */
			if (s[i] == NULL)
			{
				while (i >= 0)
				{
					free(s[i - 1]);
					i--;
				}
				free(s);
				return (NULL);
			}
			/* copy word to s */
			for (k = 0; k < char_in_word; k++)
			{
				s[i][k] = str[j];
				j++;
			}
			/* add null terminal character at the end of string */
			s[i][k] = '\0';
			/* reset */
			char_in_word = 0;
		}
	}



	return (s);
}
