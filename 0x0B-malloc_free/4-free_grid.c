#include "main.h"
/**
 * free_grid - frees a two demension grid
 *@grid:rows of matrix
 *@height:columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int j;
	int *p;

	for (j = 0; j < height; j++)
	{
		p = grid[j];
		free(p);
	}
	free(grid);
}
