#include "main.h"

/**
 * _strcmp - prints a string to stdout
 * @s1: pointer to the string to print
 * @s2: pointer to source
 * Return: pointer to the new string
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;

	}
	return (s1[i] - s2[i]);
}
