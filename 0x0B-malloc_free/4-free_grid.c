#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the passed 2D array
 * @grid: pointer to access the 2D array
 * @height: integer hodling the number of rows of our 2D array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
