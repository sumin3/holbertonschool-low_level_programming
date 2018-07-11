#include "holberton.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number need to fine the factorial
 * Return: return the factorial.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (-1);
}
