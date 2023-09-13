#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * positive_or_negative - Entry point
 * @i: int value for test
 * 
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{

	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);

	return (0);
}
