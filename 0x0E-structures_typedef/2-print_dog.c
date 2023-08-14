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
	printf("Name: %s\n", *(p).name ? p.name : "(nil)");
	printf("Age: %f\n", *(p).age);
	printf("Owner: %s\n", *(p).owner);
}
