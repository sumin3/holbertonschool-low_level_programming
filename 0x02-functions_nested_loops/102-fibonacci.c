#include <stdio.h>
/**
 * main - print the first 50 fibonacci number
 * Return: no return
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int f;
	int i;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i <= 46; i++)
	{
		f = a + b;
		a = b;
		b = f;
		if (i == 46)
			printf("%ld", f);
		else
			printf("%ld, ", f);
	}
	printf("\n");
	return (0);
}
