#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Return: No return value (void).
 */

void reverse_array(int *a, int n)
{
	int i, r;

	for (i = 0 ; i < n  ;  i++)
	{
		r = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = r;
		n--;
	}
}
