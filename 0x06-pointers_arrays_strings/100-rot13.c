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
	int i, j;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];
		int found = 0;

		for (j = 0; j < 52; j++)
		{
			if (c == alphabet[j])
			{
				str[i] = rot13[j];
				found = 1;
				break;
			}
		}

		if (!found)
			str[i] = c;
	}

	return (str);
}
