#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print combiantion of two two digit numbers
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int n = 0;
	int i = 1;

	while (n <= 99)
	{
		a = n / 10;
		b = n % 10;
		while (i <= 99)
		{
			c = i / 10;
			d = i % 10;
			if ((c + d) > (a + b))
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(' ');
				putchar('0' + c);
				putchar('0' + d);
				if (a != 9 || b != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		n++;
		i = 0;
	}
	putchar('\n');
	return (0);


}
