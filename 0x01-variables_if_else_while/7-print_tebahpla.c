#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print the alphabet in lower case reversely
 * Return: 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}

