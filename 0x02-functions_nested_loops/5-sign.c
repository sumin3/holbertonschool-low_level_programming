#include "holberton.h"
/**
 * print_sign - checks for alphabetic character
 * @n: the number to be checked
 * Return: return 1 and print + if n is greater than zero,
 * return 0 and print 0 if n is zero.
 * return -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
