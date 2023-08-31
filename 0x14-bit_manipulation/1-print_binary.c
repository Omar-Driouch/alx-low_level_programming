#include "main.h"

/**
 *  print_binary - prints the binary representation of a number
 *  @dec: long int number to print
 *  Return: void
 */

void print_binary(unsigned long int dec)
{
	int num_bits = sizeof(unsigned long int) * 8;

	int i;
	int non_zero_found = 0;

	for (i = num_bits - 1; i >= 0; i--)
	{
		if (dec & (1UL << i))
		{
			putchar('1');
			non_zero_found = 1;
		}
		else if (non_zero_found || i == 0)
		{
			putchar('0');
		}
	}
}
