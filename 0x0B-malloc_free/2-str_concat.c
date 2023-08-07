#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: A pointer to the concanited string.
 */

char *str_concat(char *s1, char *s2);
{
	char *A;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	A = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (A == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		A[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		A[i++] = s2[j];
	A[i] = '\0';

	return (A);
}
