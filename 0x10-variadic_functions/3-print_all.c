#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	const char *ptr = format;
	va_list ls;

	va_start(ls, format);

	if (ptr)
	{
		while (*ptr)
		{
			switch (*ptr)
			{
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 'c':
				printf("%c", va_arg(ls, int));
				break;
			case 's':
				printf("%s", va_arg(ls, char *));
				break;
			default:
				ptr++;
				break;
			}

			if (*(ptr + 1) != '\0')
				printf(", ");

			ptr++;
		}
	}
	printf("\n");
	va_end(ls);
}
