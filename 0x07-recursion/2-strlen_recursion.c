#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - return the length of a string
 * @s: the string that need to check
 * Return: return the length
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
