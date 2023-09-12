#include "main.h"

/**
 * _isalpha - Print lowercase alphabet
 *@c: the char to be checked
 *
 * Return: int (1 if true, 0 otherwise)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
