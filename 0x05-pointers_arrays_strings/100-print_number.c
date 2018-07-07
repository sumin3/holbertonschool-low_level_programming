#include "holberton.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: the number that needed to print
 */
void print_number(int n)
{
	
	if (n < 0)
		_putchar('-');
	if (n >= 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			_putchar(n % 10 + '0');
		}
		else
			_putchar(n % 10 + '0');
	}
	
	
}
