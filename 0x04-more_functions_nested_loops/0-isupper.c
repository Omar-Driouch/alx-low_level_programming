#include "main.h"

/**
 * _isupper  - function to check if c is digit number
 * Returns :1 if c is a digit 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= '90')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
