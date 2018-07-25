#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform the operation
 * asked by the user
 * @s: the operator that need to check
 * Return: return the result of calculation
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	/* loop 5 times (b/c have 5 operator/ struct) */
	while (i < 5)
	{
	/* check if the first char (operator) of s is match with op */
		if (*s == *ops[i].op)
		{
			/* return the match function */
			return (ops[i].f);
		}
		i++;
	}
	/* print error when operator is not match */
	printf("Error\n");
	exit(99);
}
