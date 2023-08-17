#include "variadic_functions.h"
/**
  * print_all - function that prints anything
  * @format: list of types of arguments passed to the function
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sp = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(ls);
}