#include "main.h"
#include <stdlib.h>

/**
 * create_array - checks for uppercase character
 * @size: arr size
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);
	*arr = c;
	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
