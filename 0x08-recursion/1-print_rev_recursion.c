#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: Pointer to the string to be printed.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
