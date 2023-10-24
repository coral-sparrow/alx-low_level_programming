#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - returns the largest of 3 numbers
 * @head: pointer to list
 * Return: largest number
 */

int pop_listint(listint_t **head)
{
	listint_t *p, *h;
	int n;

	if (head)
	{
		p = *head;
		h = p;
		n = p->n;

		p = p->next;
		free(h);
		*head = p;
		p = NULL;
		h = NULL;

		return (n);
	}

	return (0);
}

