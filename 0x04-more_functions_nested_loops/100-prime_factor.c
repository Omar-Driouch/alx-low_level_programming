#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int num = 612852475143;
	unsigned long int l = 2;

	while (l * l <= num)
	{
		if (num % l == 0)
		{
			num = num / l;
		}
		else
		{
			l = (l == 2) ? 3 : l + 2;
		}
	}
	printf("%lu\n", num);

	return (0);
}
