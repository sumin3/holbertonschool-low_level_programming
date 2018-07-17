#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: the width of 2 dimentional array
 * @height: the height of 2 dimentional array
 * Return: return NULL if fails, and retun NULL if width or height is 0 or
 * negative. returns a pointer to a 2 dimentional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **grid, h, i, j, f;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	/*malloc the pointer that point to width*/
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	/*malloc width*/
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for (f = h; f >= 0; f--)
				free(grid[f]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
