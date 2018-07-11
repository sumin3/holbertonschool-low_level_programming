#include "holberton.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number need to find square root
 * Return: return the square root
 */
int _sqrt_recursion(int n)
{
	return (_help(1, n));
}
/**
 * _help - a helper function to find sqrt root)
 * @n: the number need to find square root
 * @g: the square root number that guess.
 * Return: return the correct square root number
 * return -1 if n does not have a natural square root
 */
int _help(int g, int n)
{
	if ((g * g) == n)
		return (g);
	if ((g * g) < n)
		return (_help(g + 1, n));
	else
		return (-1);
}
