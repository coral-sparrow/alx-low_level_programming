#include "main.h"

/**
 * print_last_digit - Print the sign of the num
 *@n: the number to be checked
 *
 * Return: int (1 if true, 0 otherwise)
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	x = (x < 0) ? (x * -1) : x;
	_putchar('0' + x);

	return (x);
}
