#include "main.h"

/**
 * rev_string - This function reverses a string.
 * @s: A pointer to the string that needs to be reversed.
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0, len;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	len = i;
	char rev[len];

	while (i >= 0)
	{
		rev[j] = s[i];
		i--;
		j++;
	}
	for(i = 1; i <= len; i++)
	{
		s[i] = rev[i];
	}
}
