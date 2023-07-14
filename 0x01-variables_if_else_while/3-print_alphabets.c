#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
		putchar(n);
	for (n = 65; n <= 90; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
