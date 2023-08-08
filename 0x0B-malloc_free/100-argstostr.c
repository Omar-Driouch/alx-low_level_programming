#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */

char *argstostr(int ac, char **av)
{
	char **A;
	unsigned int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	A = (char **)malloc(ac * sizeof(char *));
	if (A == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		A[i] = (char *)malloc(strlen(av[i])  * sizeof(char) + 1);
		if (A[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(A[j]);
			}
			free(A);
			return (NULL);
		}
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]) + 1; j++)
		{
			if (av[i][j] != ' ')
				A[i][j] = av[i][j];
			else
				A[i][j] = '\n';
		}
	}

	return (A);
}
