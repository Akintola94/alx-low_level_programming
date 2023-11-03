#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: null if it fails
 */
int **alloc_grid(int width, int height)
{
	int **fed;
	int s, l;

	if (width <= 0 || height <= 0)
		return (NULL);

	fed = malloc(sizeof(int *) * height);

	if (fed == NULL)
		return (NULL);

	for (s = 0; s < height; s++)
	{
		fed[s] = malloc(sizeof(int) * width);

		if (fed[s] == NULL)
		{
			for (; s >= 0; s--)
				free(fed[s]);

			free(fed);
			return (NULL);
		}
	}

	for (s = 0; s < height; s++)
	{
		for (l = 0; l < width; l++)
			fed[s][l] = 0;
	}

	return (fed);
}
