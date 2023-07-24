#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int times = 35;
	int sum = 0;

	srand(time(0));
	for (i = 0; i < times - 1; i++)
	{
		int randomNumber = rand() % 90 + 33;
		sum += randomNumber;
		printf("%c", randomNumber);
	}
	int lastRandomNumber = 2772 - sum;
	printf("%c", lastRandomNumber);
	printf("\n");
	return (0);
}
