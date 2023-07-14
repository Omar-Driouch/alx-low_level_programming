#include <stdio.h>

/**
 * main - printsall the alphabets.
 * Return: always 0 (Success).
 */

int main(void)
{
	int n = 97;

	do {
		putchar (n);
		n++;
	} while (n < 123);
	putchar ('\n');
	return (0);
}
