#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: An integer to be checked for primality.
 * Return: Returns 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 1));
}

/**
 * is_prime - function helper
 * @n: integer params
 * @i: integer params
 * Return: 1 if the integer is prime, 0 otherwise.
 */

int is_prime(int n, int i)
{
	if (n < 0)
		return (0);
	if ((i * i) > n)
		return (1);
	if (i * i == n)
		return (0);

	return (is_prime(n, i + 1));
}
