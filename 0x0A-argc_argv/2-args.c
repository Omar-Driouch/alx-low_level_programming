#include <stdio.h>

/**
 * main - Prints all received command line arguments.
 * @argc: The count of command line arguments.
 * @argv: An array containing the program's command line arguments.
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
