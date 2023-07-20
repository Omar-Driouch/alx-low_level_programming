#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14, followed by a new line.
 *
 * This function prints the numbers from 0 to 14, repeated 10 times, 
 * and adds a new line after each repetition.
 *
 * Return: void
 */
#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
