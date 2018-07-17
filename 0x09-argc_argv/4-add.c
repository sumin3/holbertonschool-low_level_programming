#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
int _isdigit(int c);
/**
 * main - write a program that add positive numbers
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
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
