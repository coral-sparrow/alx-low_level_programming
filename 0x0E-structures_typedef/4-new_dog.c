#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - check the code for ALX School students.
 * @name: dog
 * @age: float
 * @owner: char
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	
	if (!name || !owner)
		return (NULL);
	p = malloc(sizeof(dog_t));

	if (!p)
		return (NULL);

	p->name = strdup(name);
	p->owner = strdup(owner);
	p->age = age;

	if (!p->name || !p->owner)
	{
		free (p->name);
		free (p->owner);
		free (p);
		return (NULL);
	}

	return (p);
}
