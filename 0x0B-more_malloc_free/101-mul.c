#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
void print_number(int n);
int _isdigit(int c);
void print_error();
/**
 * main - write a program that multiplies positive numbers
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 1;
	if (argc - 1 != 2)
	{
		print_error();
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				print_error();
				exit(98);
			}
		}
		mul = mul * atoi(argv[i]);
	}
	print_number(mul);
	_putchar('\n');
	return (0);
}
/**
 * print_error - print error message
 */
void print_error()
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
}
/**
 * print_number - prints an integer
 * @n: the number that needed to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			_putchar((n % 10) * (-1) + '0');
		}
		else
		{
			_putchar('-');
			_putchar((n % 10) * (-1) + '0');
		}

	}
	if (n >= 0)
	{
		if (n / 10)
		{
			print_number(n / 10);
			_putchar((n % 10) + '0');
		}
		else
			_putchar((n % 10) + '0');
	}
}
/**
 * _isdigit - check for a digit (0 to 9)
 * @c: the number to be checked
 * Return: return 1 if c is a digit. otherwise, return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
