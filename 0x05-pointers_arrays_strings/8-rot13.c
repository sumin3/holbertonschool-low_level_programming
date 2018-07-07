#include "holberton.h"
/**
 * rot13 - encodes a string using rot13
 * @s: the string that need to encode
 * Return: return the encoded string
 **/
char *rot13(char *s)
{
	int i = 0, j;
	char l[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encd[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for (j = 0; j < 53; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = encd[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
