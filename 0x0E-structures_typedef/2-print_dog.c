#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a struct dog.
 * @d: Pointer to a struct dog.
 * Return: Nothing.
 */


void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (*d).name != NULL ? d->name : "(nil)");
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner != NULL ? d->owner : "(nil)");
	}
}
