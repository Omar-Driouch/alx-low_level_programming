#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char *const format, ...)
{
	const char *ptr = format;
	va_list args;
	char *str;

	va_start(args, format);
	while (strlen(format) != 0)
	{
		while (*ptr)
		{
			switch (*ptr)
			{
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 's':
				str = va_arg(args, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				ptr++;
				continue;
			}
			if (*(ptr + 1) != '\0')
				printf(", ");

			ptr++;
		}
		break;
	}
	printf("\n");
	va_end(args);
}
