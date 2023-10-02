#include "main.h"

/**
 * _islower - Print lowercase alphabet
 *@c: the char to be checked
 *
 * Return: int (1 if true, 0 otherwise)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
