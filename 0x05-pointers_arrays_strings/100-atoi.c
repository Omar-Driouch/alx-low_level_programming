#include "main.h"

/**
 * print_number - print an integer
 *
 * Return : void
 */

int _atoi(char *s)
{
	int i = 0;
	int result = 0;
	int si = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && s[i + 1] >= '0' && s[i+1] <= '9')
			si = 1;
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		i++;
	}
	if (s[i - 1] >= '0' && s[i-1] <= '9' && si != 0)
		si =-1 ;
	if (si == 0)
		si=1;
	return (si * result);
}	
