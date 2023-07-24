#include "main.h"

/**
 * swap_int - function that swaps two values of two integers using pointers
 * @a: pointer1
 * @b: pointer2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
