#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int single_digit = 0;

	while (single_digit <= 9)
	{
		printf("%d", single_digit);
		single_digit++;
	}
	putchar('\n');
	return (0);
}
