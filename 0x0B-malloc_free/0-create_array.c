#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 * @size: Size of the array.
 * @c: Character to be stored in the array.
 *
 * Returns: A pointer to an array of characters.
 */


char *create_array(unsigned int size, char c)
{
	char *A = malloc(sizeof(char) * size);
	int i;

	if (A == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}

	return (A);
}
