#include "main.h"
#include <stdlib.h>

/**
 * str_size - checks for uppercase character
 * @s: int
 * Return: 1 if c is uppercase, 0 otherwise
 */

int str_size(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; i++)
		size++;

	return (size);

}

/**
 * _concat - checks for uppercase character
 * @arr: sdfs
 * @s2: ptr
 * @si: int
 * @ei: int
 * Return: string
 */
char *_concat(char *arr, char *s2, int si, int ei)
{
	int isi, idx = 0;

	isi = si;

	for (; si < (isi + ei); si++)
		if (isi == 0)
			arr[si] = s2[si];
		else
		{
			arr[si] = s2[idx];
			idx++;
		}

	return (arr);

}

/**
 * str_concat - checks for uppercase character
 * @s1: arr size
 * @s2: string 2
 * Return: 1 if c is uppercase, 0 otherwise
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int  size1 = 0, size2 = 0, total_size = 0;

	if ((s1 == NULL) && (s2 == NULL))
	{
		arr = (char *) malloc(sizeof(char));
		arr[0] = '\0';
		return (arr);
	}

	if ((s1 == NULL) || (s2 == NULL))
	{
		if (s1 == NULL)
		{
			size2 = str_size(s2);
			arr = (char *) malloc((sizeof(char) * size2) + 1);
			_concat(arr, s2, 0, size2);
			arr[size2 + 1] = '\0';
			return (arr);
		}
		else
		{
			size1 = str_size(s1);
			arr = (char *) malloc((sizeof(char) * size2) + 1);
			_concat(arr, s1, 0, size1);
			arr[size1 + 1] = '\0';
			return (arr);
		}
	}
	else
	{
		size1 = str_size(s1);
		size2 = str_size(s2);
		total_size = size1 + size2 + 1;
		arr = (char *) malloc(total_size);
		_concat(arr, s1, 0, size1);
		_concat(arr, s2, size1, size2);
		arr[total_size] = '\0';
		return (arr);
	}
}

