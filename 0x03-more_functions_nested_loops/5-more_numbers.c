#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int i, num, fd, ld;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10)
				fd = num;
			else
				fd = num / 10;
			ld = num % 10;
			_putchar('0' + fd);
			if (num >= 10)
				_putchar('0' + ld);
		}
		_putchar('\n');
	}
}
