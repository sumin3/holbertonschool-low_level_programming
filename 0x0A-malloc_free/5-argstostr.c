#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the arguments
 * Return: return the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	arg = malloc(sizeof(char) * ac);
	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, index++)
	{
		for (j = 0; av[i][j] != '\0'; j++, index++)
		{
			arg[index] = av[i][j];

		}
		arg[index] = '\n';

	}
	return (arg);
}
