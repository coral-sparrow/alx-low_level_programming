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
	int i = 0, j = 0,  size1 = 0, size2 = 0;
	char *arr;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	arr = (char *) malloc(sizeof(char) * (size1 + size2 + 1));

	if (!arr)
		return (NULL);

	if (s1)
	{
		for (; i < size1; i++)
			arr[i] = s1[i];
	}

	if (s2)
	{
		for (; j < size2; j++)
		{
			arr[i] = s2[j];
			i++;
		}
	}

	return (arr);
}


