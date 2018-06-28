#include "holberton.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: no return
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar('0' + c);
	_putchar('\n');
}
