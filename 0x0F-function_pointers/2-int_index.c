#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  function that executes a function given as a parameter
 * on each element of an array
 * @array: is the  array
 * @size:  is the number of elements in the array
 * @cmp: is a pointer to the function you need to use
 * Return: int_index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int int_i = -1;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		int_i = (*cmp)(array[i]);
		if (int_i == 1)
		{
			int_i = i;
			break;
		}
		}

	return (int_i);
}
