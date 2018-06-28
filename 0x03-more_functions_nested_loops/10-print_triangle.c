#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;
	int m = size;
	int n = 0;

	if (size > 0)
	{
		while (m != 0)
		{
			for (i = 1; i < m; i++)
				_putchar(' ');
			for (j = 0; j <= n; j++)
				_putchar('#');
			_putchar('\n');
			n++;
			m--;
		}
	}
	else
		_putchar('\n');
}
