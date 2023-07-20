#include "main.h"

/**
 * print_diagonal - Prints the character '\' n times followed by a new line.
 * @n: The number of times the character '\' should be printed.
 *
 * This function uses the _putchar function to print the character '\'
 * n times, and then adds a new line at the end of the line.
 *
 * If n is 0 or less, the function prints only the new line '\n'.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (i != n - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
