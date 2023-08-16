#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints the opcodes of its own main function
 * @argc: The number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: Always returns 0
 */
int main(int argc, char *argv[])
{
	int numBytes, i;
	int (*mainAddr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numBytes; i++)
	{
		opcode = *(unsigned char *)mainAddr;
		printf("%.2x", opcode);

		if (i != numBytes - 1)
		{
			printf(" ");
			mainAddr++;
		}
	}

	printf("\n");
	return (0);
}
