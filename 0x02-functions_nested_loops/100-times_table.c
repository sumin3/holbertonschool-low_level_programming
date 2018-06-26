#include "holberton.h"
/**
 * times_table - prints the n times table
 * @n: the number of time that need to print
 * Return: no return
 */
void print_times_table(int n)
{
	int num1[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int num2[16] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int i, j;
	int result;
	int first_digit;
	int second_digit;
	int last_digit;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				result = num1[i] * num2[j];
				first_digit = result / 10;
				last_digit = result % 10;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					if (result < 10)
						_putchar(' ');
					if (result < 100)
						_putchar(' ');
				}
				if (result < 10)
					_putchar('0' + result);
				else if (result >= 10 && result <= 99)
				{
					first_digit = result / 10;
					last_digit = result % 10;
					_putchar('0' + first_digit);
					_putchar('0' + last_digit);
				}
				else if (result >= 100)
				{
					first_digit = result / 100;
					second_digit = (result / 10) % 10;
					last_digit = result % 10;
					_putchar('0' + first_digit);
					_putchar('0' + second_digit);
					_putchar('0' + last_digit);
				}
			}
			_putchar('\n');
		}
	}
}
