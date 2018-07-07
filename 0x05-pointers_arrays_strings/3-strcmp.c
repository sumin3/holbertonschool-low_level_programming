#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: the string that need to compare
 * @s2: the string that need to compare
 * Return: return -15 if s1 is less than s2
 * return 15 if s1 is greater than s2
 * return 0 if s1 match s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, cmp;

	while (s1[i++] != '\0')
		;
	while (s2[j++] != '\0')
		;
	if (i == j)
		cmp = 0;
	else if (i > j)
		cmp = 15;
	else if (i < j)
		cmp = -15;
	return (cmp);
}
