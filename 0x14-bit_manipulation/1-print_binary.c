#include "main.h"

/**
 *  print_binary - prints the binary representation of a number
 *  @dec: long int number to print
 *  Return: void
 */

void print_binary(unsigned long int dec)
{

	int i = 31;
	int shiftter, non_zero_found = 0;

	while (i >= 0)
	{
		shiftter = (1 << i);
		if (dec & shiftter)
		{
			_putchar('1');
			non_zero_found = 1;
		}
		else if (non_zero_found || i == 0)
			_putchar('0');
		i--;
	}
}
