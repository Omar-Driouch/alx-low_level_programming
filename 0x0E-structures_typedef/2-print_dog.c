#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a struct dog.
 * @d: Pointer to a struct dog.
 * Return: Nothing.
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
	printf("Age: %.6f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nill)");
}
