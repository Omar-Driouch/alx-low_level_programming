#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: integer for which the times table will be printed
 *
 * Description:
 * This function takes an integer parameter 'n' and prints the times table 
 * up to the given number.
 * If 'n' is greater than 15 or less than 0, the function does not print 
 * anything.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0;

	while (i <= n)
	{
		int j = 0;

		for (j = 0; j <= n; j++)
		{
			if (i * j >= 10)
			{
				_putchar('0' + (j*i / 10));
				_putchar('0' + (j*i % 10));
			}
			else
			{
				_putchar('0' + i*j);
				_putchar(' ');
			}
			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar(' ');
		}
		i++;
		_putchar('\n');
	}
}
