#include "variadic_functions.h"

/**
 * print_all -  a function that prints anything.
 * @format:  is a list of types of arguments passed to the function.
 *
 * Return: void.
 */

void print_all(const char *const format, ...)
{
	va_list args;
	

	const char *ptr = format;
	int char_count = 0;

	va_start(args, format);
	while (*ptr != '\0' && char_count < 9)
	{
		switch (*ptr)
		{
		case 'c':
		{
			char c = va_arg(args, int);
			printf("%c, ", c);
			char_count++;
			break;
		}
		case 'i':
		{
			int num = va_arg(args, int);
			printf("%d, ", num);
			char_count++;
			break;
		}
		case 'f':
		{
			double num = va_arg(args, double);
			printf("%f, ", num);
			char_count++;
			break;
		}
		case 's':
		{
			char *str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s, ", str);
				char_count++;
			}
			break;
		}
		}
		ptr++;
	}

	va_end(args);

	printf("\n");
}
