#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer in an array
 * @array: the array to search in
 * @size: the number of elements in the array
 * @cmp: pointer to the comparison function
 * Return: index of the first element for which cmp doesn't 
 * return 0, or -1 if no elements match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    if (array == NULL || cmp == NULL)
        return (-1);

    for (int i = 0; i < size; i++)
    {
        if ((*cmp)(array[i]) != 0)
        {
            return (i);
        }
    }

    return (-1);
}
