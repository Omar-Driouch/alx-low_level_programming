#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The input string.
 * Return: void
 *
 */

void puts_half(char *str)
{
	int i = 0, half;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		half = i / 2;
	else
	{
		half = i / 2;
		half++;
	}

	for (i = half; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
