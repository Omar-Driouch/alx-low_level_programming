#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else
		return (1);
}
