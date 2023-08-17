#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: is the number of integers passed to the function
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int current_number;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0)
		{
			printf("%s", separator);
		}
		current_number = va_arg(args, int);
		printf("%d", current_number);
	}
	va_end(args);
	putchar('\n');
}
