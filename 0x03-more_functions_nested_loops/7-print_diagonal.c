#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i;
	int m = 0;

	if (n > 0)
	{
		while (m != n)
		{
			for (i = 0; i < m; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			m++;
		}
	}
	else
		_putchar('\n');
}
