#include <stdio.h>

/**
 * main - prints all the alphabets.
 * Return: always 0 (Success).
 */

int main(void)
{
	int n = 97;

	do {
		if(n == 113 || n == 101) 
		{
			n++; 
		}
		else {
			putchar (n);
			n++;
		}
	} while (n < 123);
	putchar ('\n');
	return (0);
}
