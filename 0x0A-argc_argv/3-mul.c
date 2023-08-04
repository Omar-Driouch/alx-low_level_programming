#include <stdio.h>

/**
 * main - Multiplies two numbers.
 * @argc: The count of command line arguments.
 * @argv: An array containing the program's command line arguments.
 * Return: 0 (Success) 1 (error).
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc <= 1)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			if (*argv[i] >= '0' && *argv[i] <= '9')
				res = res * (*argv[i] - '0');
		}
	}
	printf("%d\n", res);
	return (0);
}
