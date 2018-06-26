#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Return: no return.
 */
void jack_bauer(void)
{
	int i, j, a, b, c, d;

	a = b = c = d = 0;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10;
			d = j % 10;
			_putchar('0' + a);
			_putchar('0' + b);
			_putchar(':');
			_putchar('0' + c);
			_putchar('0' + d);
			_putchar('\n');
		}
		j = 0;
	}
}
