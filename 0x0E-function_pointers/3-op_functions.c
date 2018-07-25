#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - add two numbers
 * @a: first number need to add
 * @b: second number need to add
 * Return: return the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - find difference of two numbers
 * @a: first number
 * @b: second number
 * Return: return the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - find product of two numbers
 * @a: first number
 * @b: second number
 * Return: return the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - find the result of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: return result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - find the remainder of the division of two number
 * @a: first number
 * @b: second number
 * Return: return the remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
