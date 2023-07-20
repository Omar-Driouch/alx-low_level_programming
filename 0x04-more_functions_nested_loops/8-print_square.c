#include "main.h"

/**
 * print_square - Prints a square using the character '#'.
 * @size: The size of the square to be printed.
 *
 * This function prints a square of the given size using the character '#'.
 * If size is 0 or less, the function prints only a new line '\n'.
 * The _putchar function is used to print the characters.
 *
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}

			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
