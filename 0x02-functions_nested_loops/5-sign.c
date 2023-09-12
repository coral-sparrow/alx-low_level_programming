#include "main.h"

/**
 * print_sign - Print the sign of the num
 *@n: the number to be checked
 *
 * Return: int (1 if true, 0 otherwise)
 */
int print_sign(int n)
{
	if (n > 0 )
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else 
	{
		_putchar('0');
		return (0);
	}
}
