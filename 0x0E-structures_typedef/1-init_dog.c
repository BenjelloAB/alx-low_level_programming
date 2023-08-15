#include "dog.h"

/**
 * init_dog - initialize the struct dog variable
 * @d: pointer to thedog structure object
 * @name: pointer to the name of the dog's string
 * @age: integer holding the dog's age
 * @owner: pointer to the owner string
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
