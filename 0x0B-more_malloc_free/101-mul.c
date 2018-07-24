#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _isdigit(int c);
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
	int i, j, k, h, p, n, flag = 0, num2 = 0, len1 = 0, len2 = 0;
	char *mul;
	char *num1;
	/* if not two numbers, exit */
	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}
	/* find len of two number */
	/* print error if not compose by digits */
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
			if (i == 1)
				len1++;
			else if (i == 2)
				len2++;
		}
	}
	/* allocate space for mul and num */
	mul = malloc(sizeof(char) * (len1 + len2 + 1));
	if (mul == NULL)
		exit(98);
	num1 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (num1 == NULL)
		exit(98);
	/* use infinite_add function to add number */
	for (k = 0; argv[2][k] != '\0'; k++)
	{
		/* num2 is the current digit of number 2 */
		num2 = argv[2][k] - '0';
		/* init num1, make it equal 0 */
		num1 = infinite_add("0", "0", num1, len1 + len2 + 1);
		/* use add instead of mul to multiplies two number */
		/* keep adding num1 (number 1) by num2 times (by using loop) */
		for (h = 0; h < num2; h++)
		{
			num1 = infinite_add(num1, argv[1], num1, len1 +
					    len2 + 1);
		}
		/* add zero at the end of string num1 */
		num1 = add_zero(num1, len2 - k - 1);
		/* add the result of num1 to get the final result */
		mul = infinite_add(mul, num1, mul, len1 + len2 + 1);
	}
	/* remove leading zero */
	for (p = 0; mul[p] != '\0'; p++)
	{
		if (mul[p] != '0')
		{
			for (n = 0; mul[p] != '\0'; n++)
			{
				mul[n] = mul[p];
				p++;
				flag = 1;
			}
		}
		else if (mul[p] == '0' && flag == 0)
		{
			mul[0] = '0';
			n = 1;
		}
	}
	/* add '\0' at the end of string mul */
	mul[n] = '\0';
	printf("%s\n", mul);
	return (0);
}
/**
 * add_zero - add zero at the end of string
 * @num: number of zero need to add
 * @sum: the string that need to add zero
 * Return: return a pointer of string that contain zero
 */
char *add_zero(char *sum, int num)
{
	int len = 0, i = 0;
	/* find len of sum */
	while (sum[len] != '\0')
		len++;
	/* add num zeros to the end of sum by looping num times */
	for (i = len; i < len + num; i++)
	{
		sum[i] = '0';
	}
	sum[i] = '\0';
	return (sum);
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
