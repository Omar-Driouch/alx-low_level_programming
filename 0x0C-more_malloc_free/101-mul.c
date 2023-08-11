#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>



/**
 *
 *
 */

int _mul(int num1, int num2)
{
	return (num1 * num2);
}


/**
 *
 *
 *
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isdigit(argv[1][1]) || !isdigit(argv[2][1]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", _mul(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
