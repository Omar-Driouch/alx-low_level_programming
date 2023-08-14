#include "dog.h"


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
	newDog->owner = strdup(owner);
	 if (newDog->owner == NULL)
	 {
		 free(newDog->name);
		 free(newDog);
		 return (NULL);
	 }
	 newDog->age = age;

	 return (newDog);
}
