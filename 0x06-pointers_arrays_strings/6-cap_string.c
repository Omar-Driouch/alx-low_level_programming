#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @c: input string.
 * Return: pointer to the modified string.
 */

char *cap_string(char *c)
{
	const char s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, j;

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] = c[0] - 32;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				if (c[i - 1] == s[j])
				{
					c[i] = c[i] - 32;
					break;
				}
			}
		}
	}

	return (c);
}
