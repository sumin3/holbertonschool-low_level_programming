#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print all the numbers of base 16 starting from 0 in lowercase
 * Return: 0
 */
int main(void)
{
	int base16_number_num = 0;
	char base16_number_letter = 'a';

	while (base16_number_num <= 9)
	{
		putchar('0' + base16_number_num);
		base16_number_num++;
	}
	while (base16_number_letter <= 'f')
	{
		putchar(base16_number_letter);
		base16_number_letter++;
	}
	putchar('\n');
	return (0);
}

