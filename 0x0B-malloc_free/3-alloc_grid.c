#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Main Enry
 * @width: input
 * @height: input
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int is, js;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (is = 0; is < height; is++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[is] == NULL)
		{
			while (is >= 0)
				free(grid[is--]);
			free(grid);
			return (NULL);
		}


		for (js = 0; js < width; js++)
			grid[is][js] = 0;
	}

	return (grid);
}
