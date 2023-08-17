#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
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
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
			break;
		}
		default:
			break;
		}

		if (*(ptr + 1) != '\0' && (ptr[0] == 'c' || ptr[0] == 'i' ||
								   ptr[0] == 'f' || ptr[0] == 's'))
			printf(", ");

		ptr++;
	}
	va_end(args);
	printf("\n");
}
