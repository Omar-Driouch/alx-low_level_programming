#include "dog.h"

/**
 * init_dog - s fucntion that initilize the structure of dog
 * @d: the struct of type dog
 * @name: the name of dog
 * @age: the age of the dog
 * @owner: the owener's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
