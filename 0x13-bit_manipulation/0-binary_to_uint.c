#include "holberton.h"
int _pow(int a, int b);
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * 1: there is one or more chars in the string b that is not 0 or 1
 * 2: b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0, power = 0, num = 0;

	if (b == NULL)
		return (0);
	len = strlen(b);
	for (i = len - 1; i >= 0; i--, power++)
	{
		if (b[i] == '1' || b[i] == '0')
			num += (b[i] - '0') * (_pow(2, power));
		else
			return (0);
	}
	return (num);
}
/**
 * _pow - returns the result of raising x to the power y.
 * @x: base value
 * @y: power value
 * Return: returns the result of raising x to the power y.
 */
int _pow(int x, int y)
{
	int i, result = 1;

	for (i = 1; i <= y; i++)
	{
		result *= x;
	}
	return (result);
}
