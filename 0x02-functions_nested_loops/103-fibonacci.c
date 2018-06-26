#include <stdio.h>
/**
 * main - print the sum of even fibonacci number that do not exceed 4,000,000
 * Return: no return
 */
int main(void)
{
	int a = 1;
	int b = 2;
	long int f;
	int i;
	long int even_sum = 2;

	for (i = 0; i <= 4000000 - 3 ; i++)
	{
		f = a + b;
		a = b;
		b = f;
		if ((f % 2) == 0)
			even_sum = even_sum + f;
	}
	printf("%ld\n", even_sum);
	return (0);
}
