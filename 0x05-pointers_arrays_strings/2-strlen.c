#include "main.h"

/**
 * _strlen - returns the largest of 3 numbers
 * @s: first integer
 *
 * Return: sting lenght
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len]  != '\0')
	{
		len++;
	}

	return (len);

}
