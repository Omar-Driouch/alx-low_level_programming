#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: String where the substring will be searched.
 * @accept: Substring of accepted characters.
 *
 * Return: Length of the occurrence.
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}

		s++;
	}

	return (0);
}
