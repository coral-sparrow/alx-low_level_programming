#include "lists.h"
#include <stdio.h>

/**
 * print_listint - returns the largest of 3 numbers
 * @h: pointer to list
 * Return: largest number
 */

size_t print_listint(const listint_t *h)
{
	if (!h)
		return (-1);
	listint_t *p;
	size_t counter = 0;

	printf("%d\n", h->n);
	counter++;
	p  = h->next;
	while (p->next)
	{
		printf("%d\n", p->n);
		p = p->next;
		counter++;
	}

	printf("%d\n", p->n);
	counter++;

	return (counter);

}

