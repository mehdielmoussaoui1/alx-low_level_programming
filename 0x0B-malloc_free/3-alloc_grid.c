#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mehdi;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	mehdi = malloc(sizeof(int *) * height);

	if (mehdi == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mehdi[i] = malloc(sizeof(int) * width);

		if (mehdi[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mehdi[i]);

			free(mehdi);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			mehdi[i][j] = 0;
	}

	return (mehdi);
}
