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
	int i = 0, j, counter = i;

	while (s[i] != '\0')
	{
		for (j = 0 ; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter = i;
				break;
			}
		}
		if (counter != 0)
			break;
		i++;
	}

	return (counter);
}
