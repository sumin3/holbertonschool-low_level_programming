#include "holberton.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 */
void print_number(int n)
{
	int num;
	int factor = 0;
	int i;
	int digit;
	int last_digit;

	digit = digit_num(n);
	if (digit == 0)
		_putchar('0' + n);
	else if (digit > 0)
	{
		if (n < 0)
			_putchar('-');
		for (i = digit - 1; i >= 1; i--)
		{
			factor = ten_to_power(i);
			num = (n / factor) % 10;
			if (num < 0)
				num = -num;
			_putchar('0' + num);
		}
		if (n < 0)
			last_digit = -(n % 10);
		else
			last_digit = n % 10;
		_putchar('0' + last_digit);
	}
}
/**
 * digit_num - find how many digits in a number
 * @n: the number to be check
 * Return: return the number of digit
 */
int digit_num(int n)
{
	int count = 0;

	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}
/**
 * ten_to_power - get the value of 10 to the n power
 * @n: the number of power
 * Return: return the result
 */
int ten_to_power(int n)
{
	int result = 10;
	int i;

	for (i = 1; i < n; i++)
		result = result * 10;
	return (result);
}
