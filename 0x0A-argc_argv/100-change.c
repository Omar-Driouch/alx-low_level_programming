#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the min number of coins to make change for an amount of money
 * @argc: The count of command line arguments.
 * @argv: An array containing the program's command line arguments.
 * Return: 0 (Success) 1 (error).
 */

int main(int argc, char *argv[])
{
	int values[] = {25, 10, 5, 2, 1};
	int current, res = 0, i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5; i++)
	{
		current = atoi(argv[1]);

		for (j = i; j < 5; j++)
		{
			while (current >= values[j])
			{
				res++;
				current -= values[j];
			}
		}
		printf("%d\n", res);
		return (0);

	}

	return (0);
}
