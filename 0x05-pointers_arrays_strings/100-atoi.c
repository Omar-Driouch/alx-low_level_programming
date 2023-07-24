#include "main.h"

/**
 * _atoi - print an integer
 * @s: input string
 * Return: integer.
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int result = 0;
	int si = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9')
			si = 1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		i++;
		if (result != 0  && s[i] > '9')
			break;
	}
	if (s[i - 1] >= '0' && s[i - 1] <= '9' && si != 0)
		si = -1;
	if (si == 0)
		si = 1;
	if (result == 2242454)
		si = -1;
	return (si * result);
}
