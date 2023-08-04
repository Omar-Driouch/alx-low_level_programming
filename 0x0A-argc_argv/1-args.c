#include <stdio.h>

/**
 * main - is the entry point to print the programs name
 * @argc: the lenght of the argv array
 * @argv: an array of char
 * Return: 0 exit with seccuess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
