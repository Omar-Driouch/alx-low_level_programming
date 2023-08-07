#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: Pointer to the original string.
 *
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *A;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	A = (char *)malloc(sizeof(char) * strlen(str) + 1);

	if (A == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		A[i] = str[i];

	A[i] = '\0';
	return (A);
}
