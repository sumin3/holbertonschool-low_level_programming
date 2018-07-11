#include "holberton.h"
/**
 * is_prime_number - determine a input integer is a prime number or not
 * @n: the number that need to determine
 * Return: return 1 if is prime, return 0 is not
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}
/**
 * helper - help function to find prime number
 * @n: the number need to check
 * @f: the factor number to help determine is a prime number or not
 * Return: return 0 if is prime, otherwise, return 1
 */
int helper(int n, int f)
{
	if (n < 2)
		return (0);
	if (n == f)
		return (1);
	else if (n % f == 0)
		return (0);
	return (helper(n, (f + 1)));
}
