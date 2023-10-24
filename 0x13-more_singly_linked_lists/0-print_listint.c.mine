#include "lists.h"
#include <stdio.h>

/**
 * print_listint - returns the largest of 3 numbers
 * @h: pointer to list
 * Return: largest number
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (-1);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}


	return (counter);

}

