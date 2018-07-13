#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a program that prints the minimum number of coins to make
 * change for an amount of money
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int cents, num = 0;

	if (argc - 1 != 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents >= 25)
	{
		num = num + cents / 25;
		cents = cents % 25;
	}
	if (cents >= 10)
	{
		num = num + cents / 10;
		cents = cents % 10;
	}
	if (cents >= 5)
	{
		num = num + cents / 5;
		cents = cents % 5;
	}
	if (cents >= 2)
	{
		num = num + cents / 2;
		cents = cents % 2;
	}
	if (cents >= 1)
	{
		num = num + cents;
	}
	printf("%d\n", num);
	return (0);
}
