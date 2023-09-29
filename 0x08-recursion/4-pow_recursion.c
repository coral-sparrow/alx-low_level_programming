#include "main.h"

/**
 * _pow_recursion - prints the string char by char,
 * @x: is the number to get factorial for
 * @y: int numbers
 * Return: int string lenght
 */
int _pow_recursion(int x, int y)
{

	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, --y));

}
