#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @s: Input string.
 * Return: The pointer to the destination string.
 */

char *cap_string(char *c)
{
	const char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i , j;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (j = 0 ; sep[j] != '\0' ; j++)
			{
				if (c[i-1] == sep[j])
				{
						c[i] = c[i] - 32;
						break;
				}
			}
		}
	}

	return (c);
}
