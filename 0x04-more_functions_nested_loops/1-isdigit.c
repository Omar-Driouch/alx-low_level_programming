#include "main.h"

/**
 * int _isdigit(int c) - function to check if c is digit number
 * Returns :1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
