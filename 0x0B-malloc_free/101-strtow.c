#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strtow - a function that splits a string into words.
 * @str: input string
 *
 * Return: returns a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **A;
	int j, i, len = 0, total_space = 0;
	int index = 0;

	if (str[0] == '\0' || str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			total_space++;
	}

	A = (char **)malloc(sizeof(char *) * total_space + 1);
	if (A == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] != ' ')
			len++;
		else
		{
			 A[index] = (char *)malloc((len + 1) * sizeof(char));
			if (A[index - 1] == NULL)
			{
				for (j = 0; j < index; j++)
				{
					free(A[j]);
				}
				free(A);
				return (NULL);
			}

			for (j = 0; j < len; j++, i++)
			{
				A[index][j] = str[i];
			}
			  A[index][j] = '\0';
			len = 0;
			index++;


		}

	}

	A[index] = (char *)malloc((len + 1) * sizeof(char));
	if (A[index] == NULL)
	{
		for (j = 0; j <= index; j++)
			free(A[j]);
		 free(A);
		 return (NULL);
	}

	for (j = 0; j < len; j++, i++)
		A[index][j] = str[i];
	 A[index][j] = '\0';


	return (A);
}
