#include "main.h"

/**
 * _memset - This function fills a block of memory with a constant byte.
 * @s: Pointer to the memory block to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 * Return: Pointer to the starting address of the memory block (s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
