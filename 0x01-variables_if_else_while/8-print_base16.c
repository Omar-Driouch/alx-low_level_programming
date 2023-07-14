#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
		if (n >= 10) 
		{
			putchar(n - 10 + 'a');
		} else 
		{
			putchar(n + '0');
		}
	putchar('\n');
	return (0);
}
