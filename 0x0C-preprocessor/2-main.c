#include <stdlib.h>
#include <stdio.h>
#define FILENAME __FILE__

/**
 * main - print the name of the file it was compiled from
 * Return: return 0
 */
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
