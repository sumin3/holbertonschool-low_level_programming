#include <stdio.h>
/**
 * main - print the first 98 fibonacci number
 * Return: no return
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int f;
	int i;
	long int a1, a2, b1, b2, sum1, sum2, overflow1, overflow2, p1, p2;

	printf("%lu, %lu, ", a, b);
	for (i = 0; i <= 98 - 4; i++)
	{
		if (i < 89)
		{
			f = a + b;
			a = b;
			b = f;
			printf("%lu, ", f);
		}
		else if (i == 89)
		{
			a1 = a / 10000000000;
			a2 = a % 10000000000;
			b1 = b / 10000000000;
			b2 = b % 10000000000;
			sum2 = a2 + b2;
			p2 = sum2 % 10000000000;
			overflow2 = sum2 / 10000000000;
			sum1 = a1 + b1 + overflow2;
			p1 = sum1 % 10000000000;
			overflow1 = sum1 / 10000000000;
			printf("%lu%lu, ", p1, p2);
		}
		else if (i > 89)
		{
			a1 = b1;
			a2 = b2;
			b1 = sum1;
			b2 = p2;
			sum2 = a2 + b2;
			p2 = sum2 % 10000000000;
			overflow2 = sum2 / 10000000000;
			sum1 = a1 + b1 + overflow2;
			p1 = sum1 % 10000000000;
			overflow1 = sum1 / 10000000000;
			if (i == 94)
				printf("%lu%lu%lu", overflow1, p1, p2);
			else
				printf("%lu%lu, ", p1, p2);
		}
	}
	printf("\n");
	return (0);
}
