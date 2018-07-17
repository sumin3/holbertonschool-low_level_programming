#include "holberton.h"
#include <stdio.h>
/**
 * main - write a program that prints all arguments it receives
 * @argc: the number of argument passed
 * @argv: a pointer array which points to each argument passed to the program
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
