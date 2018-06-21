#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print three digit numbers separated by , and  a space
 * Return: 0
 */
int main(void)
{
	int hundreds_digit = 0;
	int tens_digit = 0;
	int units_digit = 1;

	while (tens_digit <= 9 && units_digit <= 9 && hundreds_digit <= 9)
	{
		if (units_digit > tens_digit && tens_digit > hundreds_digit)
		{
			putchar('0' + hundreds_digit);
			putchar('0' + tens_digit);
			putchar('0' + units_digit);
			if (hundreds_digit != 7 || units_digit != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		if (units_digit == 9)
		{
			tens_digit++;
			units_digit = 0;
			if (tens_digit == 9)
			{
				hundreds_digit++;
				tens_digit = 0;
				units_digit = 0;
			}
		}
		units_digit++;
	}
	putchar('\n');
	return (0);
}
