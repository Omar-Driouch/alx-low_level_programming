#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
