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
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
