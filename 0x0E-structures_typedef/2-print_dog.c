#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code for ALX School students.
 * @d: dog
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
