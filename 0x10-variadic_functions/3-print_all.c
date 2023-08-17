#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	char *str;
	const char *ptr = format;
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (*ptr != '\0')
		{
			switch (*ptr)
			{
			case 'c':
				printf("%c", va_arg(ls, int));
				break;
			case 'i':
				printf("%d", va_arg(ls, int));
				break;
			case 'f':
				printf("%f", va_arg(ls, double));
				break;
			case 's':
				str = va_arg(ls, char *);

				if (!str)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				ptr++;
				continue;
			}
			if (*(ptr + 1) != '\0' && (ptr[0] == 'c' || ptr[0] == 'i' ||
									   ptr[0] == 'f' || ptr[0] == 's'))
				printf(", ");
			ptr++;
		}
	}
	printf("\n");
	va_end(ls);
}
