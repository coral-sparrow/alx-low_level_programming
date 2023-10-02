#include "main.h"

/**
 * _abs - Print the sign of the num
 *@n: the number to be checked
 *
 * Return: int (1 if true, 0 otherwise)
 */
int _abs(int n)
{
	return ((unsigned int)((n < 0) ? -n : n));
}
