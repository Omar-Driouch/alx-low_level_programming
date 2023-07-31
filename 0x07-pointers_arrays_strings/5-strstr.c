#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the main string
 * @needle: pointer to the substring to locate
 * Return: pointer to the first occurrence of the substring
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
