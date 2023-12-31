#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point for adding positive numbers.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program's command line arguments.
 * Return: 0 for success, non-zero for errors.
 */

int main(int argc, char *argv[])
{
	int i, res;

	for (i = 1; i < argc; i++)
	{
		int j;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res = res + atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
