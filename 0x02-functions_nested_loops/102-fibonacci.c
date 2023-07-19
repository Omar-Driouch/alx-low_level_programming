#include <stdio.h>

/**
 * main - This function prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, j = 1, k = 2, n;

	for (i = 1; i < 51; i++)
	{
		if (i != 50)
			printf("%ld, ", j);
		else
			printf("%ld\n", j);
		n = k + j;
		j = k;
		k = n;
	}
	return (0);
}
