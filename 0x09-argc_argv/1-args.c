#include "holberton.h"
#include <stdio.h>
/**
 * main - write a program that prints the number of arguments passed into it
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
