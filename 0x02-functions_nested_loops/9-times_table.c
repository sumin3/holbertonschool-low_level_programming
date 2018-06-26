#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * Return: no return
 */
void times_table(void)
{
	int num1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int num2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(num1[i] * num2[j]);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}
