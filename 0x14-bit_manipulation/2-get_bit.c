#include "main.h"

/**
 * get_bit - gives the bit at a given index
 * @n: unsigned long int
 * @index: index of the bit starting from 0
 * Return: the bit, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);

	else
		return (0);
}
