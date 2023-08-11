#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>



/**
 * _mul - function that mutlip 2 integers
 * @num1: first integer
 * @num2: second integer
 * Return: integer
 */

int _mul(int num1, int num2)
{
	return (num1 * num2);
}


/**
 * main - to printf the multip of 2 integers
 * @argc: the number of argummnets passed to the fucntion
 * @argv: the pointer to the array that holds the arguments
 * Return: 0 if success otherwise exit with code 98
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) < 0 || atoi(argv[2]) < 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", _mul(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
