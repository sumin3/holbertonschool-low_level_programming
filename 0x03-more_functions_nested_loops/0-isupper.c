#include "holberton.h"
/**
 * _isupper - check upper character
 * @c: the character to be checked
 * Return: return 1 if c is uppercase, otherwise, return 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
