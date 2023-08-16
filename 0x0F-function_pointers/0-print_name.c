#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: is the input string
 * @f: the pointer to fucntion returns void
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}