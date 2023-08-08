#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * @str: input string
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **A;
	int j, i, len = 0, total_space = 0;
	int index = 0;

	if (str[0] == '\0' || str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			total_space++;
	}

	A = (char **)malloc(sizeof(char *) * (total_space + 2));
	if (A == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0';)
	{
		 while (str[i] == ' ')
			 i++;

		 len = 0;
		 while (str[i + len] != '\0' && str[i + len] != ' ')
			 len++;
		 A[index] = (char *)malloc((len + 1) * sizeof(char));
		 if (A[index] == NULL)
		 {
			 for (j = 0; j < index; j++)
				 free(A[j]);
			 free(A);
			 return (NULL);
		 }
		 strncpy(A[index], &str[i], len);
		 A[index][len] = '\0';
		 index++;
		 i += len;
	}
	A[index] = NULL;
	return (A);
}
