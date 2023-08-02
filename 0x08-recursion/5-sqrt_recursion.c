#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural square root of a num
 * @n: the input parameter
 * Return: The calculated square root of 'n', or -1 if not found
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursive(n, 1));
}

/**
 * _sqrt_recursive - helper function
 * @n: integer paramtr
 * @i: integer parameter
 * Return: _sqrt_recursive
 */
int _sqrt_recursive(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursive(n, i + 1));
}
