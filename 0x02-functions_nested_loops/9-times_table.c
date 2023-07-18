#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Description: This function prints the multiplication table for the number 9
 *              showing the products of multiplying 1 to 9 by 9.
 *
 * Return: void (no return value)
 */

void times_table(void)
{
	int i = 1, j, n = 1;
	while (i < 10)
	{
		for( j = 0; j < 10; j++)
		{
			if (i == 1)
			{
				_putchar('0');
			}
			else if (j * n < 10)
			{
				_putchar(' ');
				_putchar('0' + j * n);
			}
			else
			{
				_putchar('0' + (j * n) / 10);
				_putchar('0' + (j * n) % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
		n++;
		i++;
	}
}
