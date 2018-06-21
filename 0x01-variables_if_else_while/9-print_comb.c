#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all the single digit numbers separated by , ,followed by a space
 * Return: 0
 */
int main(void)
{
	int single_digit = 0;

	while (single_digit <= 9)
	{
		putchar('0' + single_digit);
		if (single_digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		single_digit++;
	}
	putchar('\n');
	return (0);
}
