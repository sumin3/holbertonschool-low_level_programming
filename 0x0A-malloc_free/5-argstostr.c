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
	int w, h, i, j, index = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (h = 0; h < ac; h++)
	{
		for (w = 0; av[h][w] != '\0'; w++)
			len++;
		len++;
	}
	arg = (char *)malloc(sizeof(char) * (len + 1));
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
	arg[index] = '\0';
	return (arg);
}
