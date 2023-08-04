#include <stdio.h>

/**
 * main - is the entry point to print the programs name 
 * @argc: the lenght of the argv array
 * @argv: an array of char 
 * Return: 0 exit with seccuess
 */


int main (int argc, char *argv[])
{
	(void)argc;
	printf ("This program was called with \"%s\".\n",argv[0]);
	printf ("\n");

	return (0);
}
