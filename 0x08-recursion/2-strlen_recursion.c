#include "main.h"

/**
 * _strlen_recursion - prints the string char by char,
 * @s: is the char to print
 * Return: int string lenght
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	++s;
	len = 1 + _strlen_recursion(s);
	return (len);


}
