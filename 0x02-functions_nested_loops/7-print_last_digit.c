#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @num: the number to be checked
 * Return: return the value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = -num;
	last_digit = (num % 10);
	_putchar('0' + last_digit);
	return (last_digit);
}
