#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "llo, wos";
	char *t;

	t = strstr(s, f);
	printf("%s\n", t);
	return (0);
}
