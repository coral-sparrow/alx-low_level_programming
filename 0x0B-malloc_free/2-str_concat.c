#include "main.h"
#include <stdlib.h>

/**
 * str_concat - checks for uppercase character
 * @s1: arr size
 * @s2: string 2
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i, idx = 0, size1 = 0, size2 = 0, total_size = 0;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			size1++;
	}
	if (s2 == NULL)
		size2 = 0;
	else
	{
		for (i = 0; s2[i] != '\0'; i++)
			size2++;
	}

	total_size = 1 + size1 + size2;
	arr = (char *) malloc(sizeof(char) * total_size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (size1 + 1); i++)
		arr[i] = s1[i];

	for (idx = 0; idx <= size2; idx++)
	{
		arr[i - 1] = s2[idx];
		i++;
	}

	arr[total_size] = '\0';

	return (arr);
}
