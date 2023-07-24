#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src into dest.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to be copied.
 * Return: A pointer to the destination buffer (dest).
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
	 return dest;
}
