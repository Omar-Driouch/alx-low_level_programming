#include <stdio.h>

/**
 * main - main block
 * main: Two-Digit Number Sequence Printer
 * This program prints a sequence of two-digit numbers
 * in ascending order, separated by commas. The sequence
 * starts from 012 and goes up to 789, excluding numbers
 * with repeating digits.
 * Return: 0 if exited proberly.
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
