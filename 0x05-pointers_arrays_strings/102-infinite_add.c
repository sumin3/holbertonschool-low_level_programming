#include "holberton.h"
#include <stdio.h>
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
