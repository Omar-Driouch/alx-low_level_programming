#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers within a given range.
 * @min: The minimum value of the range
 * @max: The maximum value of the range
 * Return: an array
 */

int *array_range(int min, int max)
{
	int *A;
	int i, j = min;

	if (min > max)
		return (NULL);
	A = malloc(sizeof(int) * (max - min + 1));
	if (A == NULL)
		return (NULL);

	for (i = 0; j <= max; i++, j++)
		A[i] = j;

	return (A);
}
