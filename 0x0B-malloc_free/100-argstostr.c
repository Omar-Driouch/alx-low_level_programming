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
	int j, i, len, total_len;
	int index = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1;

	A = (char *)malloc(total_len * sizeof(char));
	if (A == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		for (j = 0; j < len; j++)
			A[index++] = av[i][j];

		A[index++] = '\n';
	}

	A[index] = '\0';


	return (*A);
}
