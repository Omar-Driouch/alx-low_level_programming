#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/***
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: input element
 * @size: size of each element
 * Return: pointer to a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)arr + i) = 0;

	return (arr);
}
