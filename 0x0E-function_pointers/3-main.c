#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - calculate two number
 * @argc: number of argument
 * @argv: the argument
 * Return: return 0
  */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("main Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
