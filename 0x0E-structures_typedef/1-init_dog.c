#include "dog.h"
#include <stdio.h>

/**
 * init_dog - check the code for ALX School students.
 * @d: dog
 * @name: string
 * @age: num
 * @owner: ptr
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
