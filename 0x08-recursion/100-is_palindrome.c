#include "main.h"

/**
 * is_palindrome - Checks if a string is palindrome.
 * @s: a string to be checked for palindrome.
 * Return: Returns 1 if the string is palin, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (is_palin(0, s, _strlen(s)));
}

/**
 * is_palin - function helper
 * @n: integer params
 * @i: integer params
 * @s: input string
 * Return: 1 if the string is palin, 0 otherwise.
 */

int is_palin(int i, char *s, int n)
{
	if (*s == '\0')
		return (1);

	if (i == (n / 2))
		return (1);

	if (s[i] != s[(n - 1) - i])
		return (0);
	else
		return (is_palin(i + 1, s, n));
}

/**
  * _strlen - calculate the length of a string
  * @s: pointer to string
  * Return: int
  */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
