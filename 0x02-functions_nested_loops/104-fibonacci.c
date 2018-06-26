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

	printf("%lu, %lu, ", a, b);
	for (i = 0; i <= 98 - 3; i++)
	{
		f = a + b;
		a = b;
		b = f;
		if (i == (98 - 3))
			printf("%lu", f);
		else
			printf("%lu, ", f);
	}
	printf("\n");
	return (0);
}
