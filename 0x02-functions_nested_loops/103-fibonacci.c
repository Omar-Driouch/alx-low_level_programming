#include <stdio.h>
/**
 * main - This function finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence that do not exceed 4,000,000,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int j = 1, k = 2, n, sum = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		n = k + j;
		j = k;
		k = n;
	}
	printf("%ld\n", sum);
	return (0);
}
