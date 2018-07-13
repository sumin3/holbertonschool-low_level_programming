#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: return 1 if c is letter, lowercase or uppercase. otherwise, return 0
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
