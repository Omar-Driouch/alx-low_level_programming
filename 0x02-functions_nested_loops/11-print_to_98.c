#include <stdio.h>
#include "main.h"
/**
 * printTo98 - prints numbers up to 98
 * @n: starting integer
 *
 * Description: This function prints all natural numbers from the given
 * - starting integer up to 98.
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	else if (n > 98 )
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		printf("%d",n);
	}
}
