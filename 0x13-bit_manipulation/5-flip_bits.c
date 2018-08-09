#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: the number need to flip
 * @m: after flip, should look like this number
 * Return: returns the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int n_digit, m_digit, flip = 0;
	unsigned long int tmp_n = n, tmp_m = m, i = 0;

	while (i < sizeof(n) * 8)
	{
		n = tmp_n;
		m = tmp_m;

		n_digit = (n >> (sizeof(n) * 8 - i) & 1) == 0 ? 0 : 1;
		m_digit = (m >> (sizeof(m) * 8 - i) & 1) == 0 ? 0 : 1;
		if (n_digit ^ m_digit)
			flip++;
		i++;
	}
	return (flip);


}
