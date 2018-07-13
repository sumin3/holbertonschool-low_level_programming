#include "holberton.h"
/**
 * _abs - compute the absolute value of an integer
 * @abs: the number to be computed
 * Return: return absolute number
 */
int _abs(int abs)
{
	if (abs >= 0)
		return (abs);
	else
		return (-abs);
}
