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
	int i, j, n, h, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			h = n / 10;
			k = n % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (n < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(h + '0');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
