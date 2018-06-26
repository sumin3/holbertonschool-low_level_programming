#include "holberton.h"
/**
 * print_alphabet - print alphabet
 * Return: no return
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
