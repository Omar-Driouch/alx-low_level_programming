#include "main.h"
#include <stdlib.h>

/**
 *
 *
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *saved = ptr;

	if (new_size == old_size)
		return (ptr);

	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
		return (NULL);
	if (ptr != saved)
		free(savd);

	return (ptr);
}	
