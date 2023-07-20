#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: input number.
 * Return: 1 if is a number (0 to 9), 0 in other case.
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
