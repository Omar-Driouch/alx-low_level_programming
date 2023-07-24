#include "main.h"

/**
 * rev_string - This function reverses a string.
 * @s: A pointer to the string that needs to be reversed.
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j = 0, len;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len / 2; j++)
	{
		temp = s[j];
		s[j] = s[len - 1 - j];
		s[len - 1 - j] = temp;
	}
}
