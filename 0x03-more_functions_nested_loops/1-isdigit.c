#include "holberton.h"
/**
 * _isdigit - check for a digit (0 to 9)
 * @c: the number to be checked
 * Return: return 1 if c is a digit. otherwise, return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
