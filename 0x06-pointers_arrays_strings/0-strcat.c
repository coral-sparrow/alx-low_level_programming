#include "main.h"

/**
 * _stract - prints a string to stdout
 * @dest: pointer to the string to print
 * @src: pointer to source
 * Return: pointer to the new string
 */

char *_strcat(char *dest, char *src)
{
	/* si, di: is the counter for the source/destination string */
	int si, di = 0;

	while (1)
	{
		if (dest[di] == '\0')
		{
			while (src[si] != '\0')
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
