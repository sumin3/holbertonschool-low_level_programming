#include "holberton.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * Return: return 1 if c is lowercase. otherwise, return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
