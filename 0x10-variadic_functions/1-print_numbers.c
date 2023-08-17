#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @ f: number of integers passed to the function.
 *
 * Return: no return.
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
	printf("\n");
	va_end(args);
}
