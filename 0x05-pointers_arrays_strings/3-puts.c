#include "main.h"

/**
 * _puts - This function prints a string to the standard output.
 * @str: A pointer to the string that needs to be printed.
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
