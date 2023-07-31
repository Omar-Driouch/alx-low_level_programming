#include "main.h"

/**
 * _strchr - This function locates the first occurrence of a character in str
 * @s: Pointer to the string to be searched.
 * @c: The character to be found in the string.
 * Return: Pointer to the first occurrence of the character in the string (s).
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s)
		s++;
	}

	return (0);
}
