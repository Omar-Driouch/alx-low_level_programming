#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: The count of command line arguments.
 * @argv: An array containing the program's command line arguments.
 * Return: 0 (Success) 1 (error).
 */

int main(int argc, char *argv[])
{
	if (argc <= 2 && argc > 3)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
