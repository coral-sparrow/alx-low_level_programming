#include "main.h"

/**
 * swap_int - returns the largest of 3 numbers
 * @a: first integer
 * @b: second int
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
