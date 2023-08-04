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
	int i, j, res = 0, isValid;

	if (argc == 1)
	{
		printf("0\n");
	}
	
	for (i = 1; i < argc; i++)
	{
		isValid = 1;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				isValid = 0;
				break;
			}
		}
		if (!isValid || (j == 0 && argv[i][j] == '\0'))
		{
			printf("Error\n");
			return (1);
		}

		res = res + atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
