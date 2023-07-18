#include "main.h"

/**
 * _isalpha - checks for lowercase and uppercase alphabetic
 * @c: c is an ascii character
 *
 * Return: 1 if c is alphabetic
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
