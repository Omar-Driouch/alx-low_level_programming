#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>



/**
 * _strdup - Duplicates a string.
 * @str: Pointer to the original string.
 *
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *A;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	A = (char *)malloc(sizeof(char) * strlen(str) + 1);

	if (A == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		A[i] = str[i];

	A[i] = '\0';
	return (A);
}



/**
 * new_dog - Creates a new dog instance.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 * Return: Pointer to the newly created dog instance, or NULL on failure.
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);
	newDog->name = strdup(name);
	if (newDog->name == NULL)
	{
		return (NULL);
	}
	newDog->owner = _strdup(owner);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
