#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of diagonal elements
 * @a: a pointer to the array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum +=  *(a + (i + i * size));
		sum1 +=  *(a + ((i + 1) * (size - 1)));
	}
	printf("%d, %d\n", sum, sum1);
}
