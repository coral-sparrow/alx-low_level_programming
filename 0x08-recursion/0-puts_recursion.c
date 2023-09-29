#include "main.h"

/**
 * _puts_recursion - prints the string char by char,
 * @s: is the char to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		++s;
		_puts_recursion(s);

	}
}
