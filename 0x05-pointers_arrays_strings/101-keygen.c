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

	srand(time(0));
	for (i = 0; i < times; i++)
	{
		int randomNumber = rand() % 90 + 33;
		printf("%c", randomNumber);
	}
	printf("\n");
}

