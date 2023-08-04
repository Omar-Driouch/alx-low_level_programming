#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: String where the substring will be searched.
 * @accept: Substring of accepted characters.
 *
 * Return: Length of the occurrence.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	unsigned int counter = 0;

	while (s[i] != '\0' && s[i] != ' ')
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter = i + 1;
			}
		}

		i++;
	}

	return (counter);
}
