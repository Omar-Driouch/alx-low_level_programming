#include "main.h"

/**
 * print_line - Prints the character '_' n times followed by a new line.
 * @n: The number of times the character '_' should be printed.
 *
 * This function uses the _putchar function to print the character '_'
 * n times, and then adds a new line at the end of the line.
 *
 * If n is 0 or less, the function prints only the new line '\n'.
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
