#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
	{
		if ((*s1 + '0') - (*s2 + '0') == 0)
			return (1);
		else
			return (0);
	}

	if (*s1 != *s2 && *s2 != '*')
		return (0);

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (wildcmp(s1 + 1, s2 + 1));
}
