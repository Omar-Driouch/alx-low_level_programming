#include "main.h"

/**
 * print_triangle - Prints a right-angled triangle made of '#'.
 * @size: An input integer
 *
 * This function prints a right-angled triangle made of '#' characters
 * with the specified number of rows.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
			{
				_putchar(' ');
			}
			for (k = i; k >= 0; k--)
			{
				_putchar('#');
			}

			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
