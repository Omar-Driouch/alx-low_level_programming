#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: An integer.
 *
 * Description: This function takes an integer and prints its last digit.
 *
 * Return: The last digit of the input number as an integer.
 */

int print_last_digit(int n)
{
	int r = n % 10;

	if (n < 0)
		r = r * -1;
	_putchar('0' + r);
	return (r);
}
