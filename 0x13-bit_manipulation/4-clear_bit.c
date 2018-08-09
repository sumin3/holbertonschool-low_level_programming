#include "holberton.h"
int _pow(int x, int y);
/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: the value
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	char *binary = NULL;
	unsigned long int tmp_n = *n, i = 1;
	int idx = 0;
	char digit;

	binary = malloc(sizeof(*n) * 8);
	if (binary == NULL)
		return (-1);
	if (index >= sizeof(index) * 8)
		return (-1);
	while (i <= sizeof(n) * 8)
	{
		*n = tmp_n;
		digit = (*n >> (sizeof(*n) * 8 - i) & 1) == 0 ? '0' : '1';
		binary[idx] = digit;
		idx++;
		i++;
	}
	binary[idx] = '\0';
	binary[63 - index] = '0';
	*n = binary_to_uint(binary);
	return (1);
}
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * 1: there is one or more chars in the string b that is not 0 or 1
 * 2: b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0, power = 0, num = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;
	for (i = len - 1; i >= 0; i--, power++)
	{
		if (b[i] == '1' || b[i] == '0')
			num += (b[i] - '0') * (_pow(2, power));
		else
			return (0);
	}
	return (num);
}
/**
 * _pow - returns the result of raising x to the power y.
 * @x: base value
 * @y: power value
 * Return: returns the result of raising x to the power y.
 */
int _pow(int x, int y)
{
	int i, result = 1;

	for (i = 1; i <= y; i++)
	{
		result *= x;
	}
	return (result);
}
