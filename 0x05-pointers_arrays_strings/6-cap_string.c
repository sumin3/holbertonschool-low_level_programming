#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: the string that need to capitalized
 * Return: return the changed string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i++] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.'
			|| s[i] == '!' || s[i] == ',' || s[i] == '(' || s[i]
			== ')' || s[i] == '{' || s[i] == '}' || s[i] == '?' ||
		    s[i] == ';' || s[i] == '"')
		{
			if (s[i] == '\t')
				s[i] = ' ';
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (s);
}
