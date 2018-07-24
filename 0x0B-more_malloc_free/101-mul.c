#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
void print_number(int n);
int _isdigit(int c);
void print_error();
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_zero(char *sum, int num);
/**
 * main - write a program that multiplies positive numbers
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, j, k, h, p, num = 0, len1 = 0, len2 = 0;
	char *product;
	char *sum;

	if (argc - 1 != 2)
	{
		print_error();
		exit(98);
	}
	printf("c%d\n", argc);
	printf("v%s\n", argv[1]);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				print_error();
				exit(98);
			}
			if (i == 1)
				len1++;
			else if (i == 2)
				len2++;
		}
	}
	printf("len1 %d, len2 %d\n", len1, len2);
	product = malloc(sizeof(char) * (len1 + len2 + 1));
	if (product == NULL)
		exit(98);
	sum = malloc(sizeof(char) * (len1 + len2 + 1));
	if (sum == NULL)
		exit(98);
	*product = '0';
	for (k = 0; argv[2][k] != '\0'; k++)
	{
		num = argv[2][k] - '0';
		printf("num%d\n",num);
		for (p = 0; argv[1][p] != '\0'; p++)
			sum[p] = argv[1][p];
		sum[p] = '\0';
		for (h = 0; h < num - 1; h++)
		{
			sum = infinite_add(sum,argv[1], sum, len1 + len2 + 1);
		}
		printf("sum %s\n", sum);
		sum = add_zero(sum, len2 - k -1);
		printf("zero %s\n", sum);
		product = infinite_add(product, sum, product, len1 + len2 + 1);
		printf("p%s\n", product);

	}
	return (0);
}
char *add_zero(char *sum, int num)
{
	int len = 0, i = 0;

	while (sum[len] != '\0')
		len++;
	for (i = len; i < len + num; i++)
	{
		sum[i] = '0';
	}
	sum[i] = '\0';
	return (sum);
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
/**
 * infinite_add - adds two numbers
 * @n1: number that need to add
 * @n2: number that need to add
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: return the sum (r)
 */
	char *infinite_add(char *n1, char *n2, char *r, int size_r)
	{
		int len, len1 = 0, len2 = 0, i, j;
		int overflow = 0, a1, a2, sum = 0, sum1 = 0;

		while (n1[len1++] != '\0')
			;
		while (n2[len2++] != '\0')
			;
		if (len1-- >= len2--)
			len = len1;
		else
			len = len2;
		for (i = len; i >= 0; i--)
		{
			a1 = n1[len1 - 1] - '0';
			a2 = n2[len2 - 1] - '0';
			if (len1 >= 1)
				len1--;
			else
				a1 = 0;
			if (len2 >= 1)
				len2--;
			else
				a2 = 0;
			sum = overflow + a1 + a2;
			if (sum > 9)
			{
				sum1 = sum % 10;
				r[i] = sum1 + '0';
				overflow = 1;
			}
			else
			{
				r[i] = sum + '0';
				overflow = 0;
			}
		}
		if (r[0] == '0')
		{
			if (len + 1 >= size_r && len >= size_r)
				return (0);
			for (j = 0; j <= len; j++)
			{
				r[j] = r[j + 1];
			}
			r[len] = '\0';
		}
		else
		{
			if (len + 1 >= size_r)
				return (0);
			r[len + 1] = '\0';
		}
		return (r);
	}
