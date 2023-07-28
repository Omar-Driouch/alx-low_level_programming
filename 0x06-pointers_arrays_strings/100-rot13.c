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

  for (i = 0; str[i] != '\0'; i++)
  {
    char c = str[i];

    if (c >= 'a' && c <= 'z')
    {
      if (c >= 'n')
        str[i] = c - 13;
      else
        str[i] = c + 13;
    }
    else if (c >= 'A' && c <= 'Z')
    {
      if (c >= 'N')
        str[i] = c - 13;
      else
        str[i] = c + 13;
    }
  }

  return str;
}
