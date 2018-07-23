#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - generates random valid passwords for the program
 * Return: 0
 */
int main(void)
{
	int rand_num, sum = 0;

	rand_num = rand() % 128;
	while (sum < 2772 - 128)
	{
		_putchar(rand_num);
		sum = sum + rand_num;
	}
	rand_num = 2772 - sum;
	_putchar(rand_num);
	return (0);
}
