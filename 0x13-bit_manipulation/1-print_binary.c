#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number that need to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int tmp_n = n, i = 1;
	char digit;
	int lead_0_flag = 0;

	if (n == 0)
		_putchar('0');
	while (i <= sizeof(n) * 8)
	{
		n = tmp_n;

		digit = (n >> (sizeof(n) * 8 - i) & 1) == 0 ? '0' : '1';

		if (digit == '1')
			lead_0_flag = 1;
		if (lead_0_flag == 1)
			_putchar(digit);
		i++;
	}
}
