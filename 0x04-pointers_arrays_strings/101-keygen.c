#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - generates random valid passwords for the program
 * Return: 0
 */
int main(void)
{
	int rand_num, sum;

	rand_num = rand() % 128;
	while (sum < 2772)
	{
		sum = sum + rand_num;
		if (sum <= 2772)
			putchar(rand_num);
	        else
			break;
	}
	return (0);
}
