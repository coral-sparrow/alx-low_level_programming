#include "main.h"

/**
 * _strncpy - prints a string to stdout
 * @dest: pointer to the string to print
 * @src: pointer to source
 * @n: number of bytes
 * Return: pointer to the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
