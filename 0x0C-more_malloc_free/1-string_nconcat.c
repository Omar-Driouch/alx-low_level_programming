#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings up to n characters of s2.
 * @s1: first string
 * @s2: second string
 * @n: number of characters from s2 to concatenate
 * Return: char pointer to the concatenated string (or NULL on failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *New_string;
	unsigned int i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= 0)
	{
		New_string = malloc(strlen(s1) + 1);
		if (New_string == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			New_string[i] = s1[i];
			i++;
		}
		New_string[i] = '\0';
		return (New_string);
	}
	New_string = malloc(sizeof(s1) + n + 1);
	if (New_string == NULL)
	{
		return (NULL);
	}
	i = 0;
	for (j = 0; j < strlen(s1) + n; j++)
	{
		if (j < strlen(s1))
			New_string[j] = s1[j];
		else
		{
			New_string[j] = s2[i];
			i++;
		}
	}
	New_string[j] = '\0';
	return (New_string);
}
