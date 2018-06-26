#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: the number to be checked
 * Return: return the value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = (num % 10);
	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);

	return (last_digit);
}
