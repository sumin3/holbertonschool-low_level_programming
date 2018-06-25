#include "holberton.h"
/**
 * main - print holberton
 * Return: 0
 */
int main(void)
{
	int i;
	char message[10] = "Holberton\n";

	for (i = 0; i < 10; i++)
	{
		_putchar(message[i]);
	}
	return (0);
}
