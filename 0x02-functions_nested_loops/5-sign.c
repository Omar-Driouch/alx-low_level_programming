#include "main.h"

/**
 * print_sign - checks the sign fo the integer
 * @n: n is an integer
 *
 * Return: 1 if n is positiv and -1 if n is negative and 0 if n equals to 0
 */

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
