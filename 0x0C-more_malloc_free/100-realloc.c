#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory block to be reallocated.
 * @old_size: Old size of the memory block.
 * @new_size: New size to allocate for the memory block.
 * 
 * Return: A pointer to the reallocated memory block, or NULL if realloc fails
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == old_size)
		return (ptr);

	newptr = realloc(ptr, new_size);
	if (newptr == NULL)
		return (NULL);
	if (newptr != ptr)
		free(ptr);

	return (newptr);
}
