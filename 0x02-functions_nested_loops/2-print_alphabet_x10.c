#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void);
{
        int i = 0 , j = 97;

	while (i < 10)
	{
		while (j <= 122)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
	}
}
