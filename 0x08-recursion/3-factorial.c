#include "main.h"

/**
 * factorial - prints the string char by char,
 * @n: is the number to get factorial for
 * Return: int string lenght
 */
int factorial(int n)
{
	if ((n == 0) || (n == 1))
		return (1);

	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));


}
