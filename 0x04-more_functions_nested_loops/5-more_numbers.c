#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14, followed by a new line.
 *
 * This function prints the numbers from 0 to 14, repeated 10 times, 
 * and adds a new line after each repetition.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0 , j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j < 10)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar('0' + j / 10);
				_putchar('0' + j % 10);
			}
			j++;
		}
		i++;
		_putchar(' ');
		_putchar('\n');
	}
}
