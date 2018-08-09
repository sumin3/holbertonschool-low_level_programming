#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the value
 * @index: index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_idx;

	if (index >= sizeof(index) * 8)
		return (-1);
	bit_idx = (n >> index & 1) == 0 ? 0 : 1;
	return (bit_idx);
}
