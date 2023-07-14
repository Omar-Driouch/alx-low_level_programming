#include <stdio.h>

/**
 * main - printsall the alphabets in reverse mode.
 * Return: always 0 (Success).
 */

int main(void)
{
	int n = 122;

	do {
		putchar (n);
		n--;
	} while (n >= 97);
	putchar ('\n');
	return (0);
}
