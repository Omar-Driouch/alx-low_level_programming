#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: unsigned long int pointer
 * @index: index of the bit to set, sarting from 0
 *
 * Return: 1 if it worked, or -1 if error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
