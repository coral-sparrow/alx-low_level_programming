#include "main.h"

/**
 * _strncat - prints a string to stdout
 * @dest: pointer to the string to print
 * @src: pointer to source
 * @n: number of bytes
 * Return: pointer to the new string
 */

char *_strncat(char *dest, char *src, int n)
{
	/* si, di: is the counter for the source/destination string */
	int si, di = 0;

	while (1)
	{
		if (dest[di] == '\0')
		{
			while (si < n)
			{
				dest[si + di] = src[si];
				si++;
			}
			dest[si + di] = '\0';
			break;
		}
		else
			di++;
	}

	return (dest);
}
