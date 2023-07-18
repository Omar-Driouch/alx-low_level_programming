#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}
