#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: input string.
 * Return: the pointer to dest.
 */

char *cap_string(char *c)
{
	const char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (j = 0; sep[j] != '\0'; j++)
			{
				if (c[i - 1] == sep[j])
				{
					c[i] = c[i] - 32;
					break;
				}
			}
		}
	}

	return (c);
}
