#include "main.h"

/**
 * jack_bauer - Prints every minute of the day.
 *
 * Description: This function prints every minute of a fictional day,
 * from 00:00 to 23:59.
 *
 * Return: void (no return value)
 */

void jack_bauer(void)
{
	int hours = 0;

	while (hours < 24)
	{
		int min = 0;

		while (min < 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + min / 10);
			_putchar('0' + min % 10);
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
