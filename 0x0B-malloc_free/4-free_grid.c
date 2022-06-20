#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees the grid in the previous file
 *
 * @grid: pointer to 2-D array of ints
 * @height: int
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int count;

	for (count = 0; count < height; count++)
	{
		free(grid[count]);
	}
}
