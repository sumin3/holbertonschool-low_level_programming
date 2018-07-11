#include "holberton.h"
/**
 * _pow_recursion - return the value of x rasied to the power of y
 * @x: the value need to rasied
 * @y: the power
 * Return: return the value of x rasied to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (x);
}
