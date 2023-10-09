#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - check the code
 * @nmemb: str 1
 * @size: str 2
 *
 * Return: pinter.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb && size)
	{
		ptr = malloc(nmemb * size);
		if (!ptr)
			return (NULL);

		memset(ptr, 0, nmemb * size);

		return (ptr);
	} else
		return (NULL);

}
