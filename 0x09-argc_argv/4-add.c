#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - write a program that add positive numbers
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
		printf("%d\n", sum);
	return (0);
}
