#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints the first n elements of an array of integers.
 * @a: The input array.
 * @n: The number of elements to print.
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

