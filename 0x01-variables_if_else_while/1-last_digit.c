#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit.
 * Return: always 0 (Success).
 */
 
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10  < 6 && n % 10 != 0 )
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater that 5\n",n, last_digit);
	if (n % 10 == 0)
		printf("Last digit of %d is %d\n",n, last_digit);
	return (0);
}
