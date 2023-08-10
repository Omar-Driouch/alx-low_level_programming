#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a fucntion to allocate memory for any data type
 * @b: is the passed data type
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *A;

	A = malloc(b);
	if (A == NULL)
		return (98);
	return (A);
}
