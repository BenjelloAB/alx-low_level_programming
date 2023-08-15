#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - pritns the members of the struct dog variable
 * @d: pointer to the struct dog variable
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
	else
	{
	printf("Name: (nil)\n");
	printf("Age: (nil)\n");
	printf("Owner: (nil)\n");
	}
}
