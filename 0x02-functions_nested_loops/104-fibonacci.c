#include <stdio.h>

/**
 * main - This program calculates and prints the first 98 Fibonacci numbers,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int j = 1, k = 2, n, sum = 0;

	for (i = 1; i < 99; i++)
	{
		if (i != 98)
			printf("%ld, ", j);
		else
			printf("%ld\n", j);
		n = k + j;
		j = k;
		k = n;
	}
	return (0);
}
