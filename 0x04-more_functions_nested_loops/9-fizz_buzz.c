#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 * This function prints the numbers from 1 to 100. For multiples of three,
 * it prints "Fizz" instead of the number. For multiples of five, it prints
 * "Buzz" instead of the number. For numbers which are multiples of both
 * three and five, it prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		i++;
	}
	return (0);
}
