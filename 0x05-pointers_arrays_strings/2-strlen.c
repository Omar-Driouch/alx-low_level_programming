#include "main.h"

/**
 * _strlen: function that returns the lenght of s string
 * @c: pointer to char
 * Retrun: int the ;enght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
