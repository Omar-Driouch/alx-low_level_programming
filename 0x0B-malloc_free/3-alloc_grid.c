#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dim array of int.
 * @width: first integer
 * @height: second integer
 * Return:a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **A;
	int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	A = (int **)malloc(width * sizeof(int *));

	if (A == NULL)
		return (NULL);

	for (i = 0; i < height - 1; i++)
	{
		A[i] = (int *)malloc(width  * sizeof(int));
		if (A[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(A[j]);
			}
			free(A);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			A[i][j] = 0;
	}

	return (A);
}
