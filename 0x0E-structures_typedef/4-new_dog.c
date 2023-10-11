#include "dog.h"
#include <stdio.h>

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

	p = malloc(sizeof(dog_t));

	if (!p)
		return (NULL);

	p->name = *name;
	p->age = age;
	p->owner = *owner;

	return (p);
}
