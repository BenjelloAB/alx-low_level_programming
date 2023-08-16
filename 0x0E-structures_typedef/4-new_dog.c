#include "dog.h"
#include <stdlib.h>

/**
 * copy_str - copies a sting into another palce in memory to be safe
 * @copy: pointer to the bloc in Heap to copy to
 * @str: string to copy
 * Return: void
 */
void copy_str(char *copy, char *str)
{
	int i = 0;

	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
}
/**
 * len_str - calculates the length of a string
 * @str: pointer to the string
 * Return: int -> lenght of the string including 0 byte
 */

int len_str(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * new_dog - creates a new dog of type dog_t
 * @age: integer holding the age of the dog
 * @name: pointer to the name string
 * @owner: pointer to the owner string
 * Return: dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggy = (dog_t *)malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = (char *)malloc(sizeof(char) * len_str(name));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	copy_str(doggy->name, name);
	doggy->owner = (char *)malloc(sizeof(char) * len_str(owner));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	copy_str(doggy->owner, owner);
	doggy->age = age;
	return (doggy);
}
