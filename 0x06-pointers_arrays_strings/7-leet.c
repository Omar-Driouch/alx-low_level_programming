#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string to be encoded.
 * Return: pointer to the destination string.
 */

char *leet(char *c)
{
	const char s[] = {'A', 'a', 'e', 'E', 't', 'T', 'O', 'o', 'L', 'l'};
	const char s1[] = {'4', '4', '3', '3', '7', '7', '0', '0', '1', '1'};
	int i , j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0 ; s[j] != '\0' ; j++)
		{
			if(c[i] == s[j])
				c[i] = s1[j];
		}
	}
	return (c);
}
