#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Main Entry
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int is;

	if (grid != NULL || height != 0)
	{
		for (is = 0; is < height; is++)
		{
			free(grid[is]);
		}
		free(grid);
	}
}
