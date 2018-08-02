#include "lists.h"

void print_string(void) __attribute__ ((constructor));
/**
 * print_string - print string
 */
void print_string(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
