#include <stdio.h>

/**
 * main - This program calculates and prints the first 98 Fibonacci numbers,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, j = 1, k = 2, n;

	for (i = 1; i < 86; i++)
	{
		if (i != 85)
			printf("%ld, ", j);
		else
			printf("%ld\n", j);
		n = k + j;
		j = k;
		k = n;
	}
	return (0);
}
