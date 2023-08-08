#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function that return a pointer to 2d arr of 0
 * @width: num of cols in the 2D array
 * @height: num of rows in the 2D array
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **pptr;

	if (height <= 0 || width <= 0)
		return (NULL);

	pptr = (int **)malloc(height * sizeof(int));
	if (pptr == NULL)
	{
		free(pptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		pptr[i] = (int *)malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			pptr[i][j] = 0;
		}
	}
	return (pptr);
}
