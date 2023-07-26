#include "main.h"
#include <stddef.h>

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	if (dest == NULL || src == NULL)
		return (dest);
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		 dest[i] = src[j];
		 i++;
	}
	dest[i] = '\0';
	return (dest);
}
