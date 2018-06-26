#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i;
	char alphabet = 'a';

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
