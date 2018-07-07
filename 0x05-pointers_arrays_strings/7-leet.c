#include "holberton.h"
/**
 * leet - write a function that encodes a string into 1337
 * @s: the string that need to encoded
 * Return: return the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char l_letter[5] = {'a', 'e', 'o', 't', 'l'};
	char u_letter[5] = {'A', 'E', 'O', 'T', 'L'};
	char num[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == l_letter[j] || s[i] == u_letter[j])
				s[i] = num[j];
		}
	}
	return (s);
}
