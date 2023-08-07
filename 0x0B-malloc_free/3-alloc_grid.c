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
	unsigned int i, j;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	A = (int **)calloc(width, sizeof(int));
	
	if (A == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
		A[i] = (int *)calloc(height, sizeof(int));

	return (A);
}
