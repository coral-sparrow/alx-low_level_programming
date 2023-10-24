#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the largest of 3 numbers
 * @h: pointer to list
 * Return: largest number
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;


	while (h)
	{
		h = h->next;
		counter++;
	}


	return (counter);

}

