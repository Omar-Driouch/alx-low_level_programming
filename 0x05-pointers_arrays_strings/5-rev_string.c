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
	for (int i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
	
}
