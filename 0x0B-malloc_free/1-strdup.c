#include "main.h"
#include <stdlib.h>

/**
 * _strdup - checks for uppercase character
 * @str: arr size
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *_strdup(char *str)
{
	char *arr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		size++;

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		arr[i] = str[i];
	arr[i] = '\0';

	return (arr);
}
