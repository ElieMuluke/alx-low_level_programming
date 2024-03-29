#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **iarray;
	int i, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	iarray = malloc(sizeof(int *) * height);

	if (iarray == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		iarray[i] = malloc(sizeof(int) * width);

		if (iarray[i] == NULL)
		{
			for (; i >= 0; i--)
				free(iarray[i]);

			free(iarray);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
			iarray[i][n] = 0;
	}

	return (iarray);
}
