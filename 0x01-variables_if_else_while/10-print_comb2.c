#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all the single digit numbers separated by , and  a space
 * Return: 0
 */
int main(void)
{
	int tens_digit = 0;
	int units_digit = 0;

	while (tens_digit <= 9 && units_digit <= 9)
	{
		putchar('0' + tens_digit);
		putchar('0' + units_digit);
		if (tens_digit != 9 || units_digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		if (units_digit == 9)
		{
			tens_digit++;
			units_digit = -1;
		}
		units_digit++;
	}
	putchar('\n');
	return (0);
}
