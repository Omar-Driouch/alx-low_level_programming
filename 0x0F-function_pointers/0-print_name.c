#include <stdio.h>
#include "function_pointers.h"
/**
  * print_name - function that print a name
  * @name: pointer to string
  * @f: pointer to function
  * Return: nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
