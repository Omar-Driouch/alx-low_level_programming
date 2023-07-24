#include "main.h"

/**
 * _puts - This function prints a string to the standard output.
 * @str: A pointer to the string that needs to be printed.
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; i <= _strlen(str); i++)
	{
		printf("%c", str[i]);
	}
}
