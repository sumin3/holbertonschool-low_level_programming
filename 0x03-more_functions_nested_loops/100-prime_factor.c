#include <stdio.h>
/**
 * main -  finds and prints the largest prime factor of the number 612852475143
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	int largest = 0;
	int prime = 3;
	int count = 0;

	if (num % 2 == 0)
	{
		largest = 2;
		num = num / 2;
	}
	while (count == 0)
	{
		if (num % prime == 0)
		{
			largest = prime;
			num = num / prime;
			if (num / prime == 0)
				count = 1;
		}
		prime = prime + 2;
	}
	printf("%d\n", largest);
	return (0);
}
