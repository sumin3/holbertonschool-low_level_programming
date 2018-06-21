#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print the alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
