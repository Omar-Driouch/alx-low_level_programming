#include "main.h"

/**
 * print_rev - a fucntion that prints reverse string
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0, j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
