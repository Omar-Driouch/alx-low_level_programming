#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion.
 * @s: A pointer to the null-terminated string to be printed.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	write(1, s, 1);
	_puts_recursion(s + 1);
}