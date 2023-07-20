#include "main.h"

/**
 * print_number - print an integer
 *
 * Return : void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
	{
		_putchar('0' + n);
	}
	else if (n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n < 1000)
	{
		_putchar('0' + (n / 100));
		n = n %  100;
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n < 10000)
	{
		_putchar('0' + (n / 1000));
		n = n %  1000;
		_putchar('0' + (n / 100));
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	
}
