#include "holberton.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: the string that need to print
 * @size: the size bytes of the buffer pointed by b
 */
void print_buffer(char *b, int size)
{
	int i, j, k, head = 0, tail = 9;
	int num = 0, line = 0, num_of_lines;
	double cal_line = 0;

	cal_line = size / 10.0;
	line = size / 10;
	if (cal_line > line)
		num_of_lines = line + 1;
	else
		num_of_lines = line;
	if (size <= 0)
		printf("\n");
	for (i = 0; i < num_of_lines; i++)
	{
		printf("%08x: ", num);
		for (j = head; j <= tail; j++)
		{
			if (j >= size)
				printf("  ");
			else
				printf("%02x", b[j]);
			if (j % 2 != 0)
				printf(" ");
		}
		for (k = head; k <= tail; k++)
		{
			if (b[k] < 32 || b[k] > 126)
				b[k] = '.';
			if (k >= size)
				b[k] = ' ';
			else
				printf("%c", b[k]);
		}
		if (tail < size - 1)
		{
			head = tail + 1;
			tail = tail + 10;
		}
		printf("\n");
		num = num + 10;
	}

}
