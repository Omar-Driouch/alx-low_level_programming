#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: Pointer to the original string.
 *
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *A = malloc(sizeof(str) + 1);
	unsigned int i;

	if (str == NULL)
		return (NULL);
	if (A == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		A[i] = str[i];

	A[i] = '\0';
	return (A);
}
