#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as a parameter
 * on each element of an array
 * @array: is the  array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}

}
