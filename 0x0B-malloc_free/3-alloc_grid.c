#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-D array of ints, inits all to 0
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **rayray;
	int county;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	rayray = malloc(height * sizeof(int *));
	if (rayray == NULL)
	{
		free(rayray);
		return (NULL);
	}
	for (county = 0; county < height; county++)
	{
		rayray[county] = malloc(width * sizeof(int));
		if (rayray[county] == NULL)
		{
			while (county >= 0)
			{
				free(rayray[county]);
				county--;
			}
			free(rayray);
			return (NULL);
		}
	}
	return (rayray);
}
