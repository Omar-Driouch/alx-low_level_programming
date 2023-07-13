#include <unistd.h>

/**
 * main - uses the write function to display the content.
 * Return: 1 to indicate an error condition as requested
 * write(2, ...) will write the string directly to the standard error stream.
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
