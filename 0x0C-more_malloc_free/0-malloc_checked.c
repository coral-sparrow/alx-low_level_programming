#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check the code
 * @b: int
 *
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
