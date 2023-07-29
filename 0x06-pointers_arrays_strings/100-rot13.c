#include "main.h"

/**
 * rot13 - function applies the ROT13 algorithm to the input string.
 * ROT13 is a simple letter substitution cipher that replaces a letter with
 * the 13th letter after it in the alphabet.
 * For example, 'a' is replaced by 'n', 'b' is replaced by 'o', and so on.
 *
 * @str The input string to apply ROT13 to.
 * Return: pointer to char
 */

char *rot13(char *str)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		while ((alpha[j] != '\0') && (str[i] != alpha[j]))
		{
			j++;
		}
		if (str[i] == alpha[j])
		{
			str[i] = rot[j];
		}
	}

	return (str);
}
