#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print the alphabet in lower case except q & e
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
			letter++;
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

