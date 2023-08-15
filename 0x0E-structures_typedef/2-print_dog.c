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
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
	printf("Name: (nil)\n");
	printf("Age: (nil)\n");
	printf("Owner: (nil)\n");
	}
}
