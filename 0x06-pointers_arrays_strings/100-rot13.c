#include "main.h"

/**
 * rot13 - function applies the ROT13 algorithm to the input string.
 * ROT13 is a simple letter substitution cipher that replaces a letter with
 * the 13th letter after it in the alphabet.
 * For example, 'a' is replaced by 'n', 'b' is replaced by 'o', and so on.
 *
 * @str The input string to apply ROT13 to.
 * Return: The ROT13-encoded string.
 */

char *rot13(char *str)
{
	int i;
	char c;

	for (i = 0; (c = str[i]); i++)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
			str[i] = (c - base + 13) % 26 + base;
		}
	}

	return (str);
}
