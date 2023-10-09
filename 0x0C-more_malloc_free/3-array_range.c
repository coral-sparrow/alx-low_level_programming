#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * array_range - check the code
 * @min: str 1
 * @max: str 2
 *
 * Return: pinter.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0, len = 0, j = 0;


	if (min <= max)
	{
		len  = max - min + 1;
		j = min;
		ptr = malloc(len * sizeof(int));

		if (!ptr)
			return (NULL);

		for (i = 0; i < len; i++)
		{
			ptr[i] = j;
			j++;
		}
		return (ptr);
	} else
		return (NULL);

}
