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
	half = i / 2;

	for (i = half; i < half * 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar("\n");
}
