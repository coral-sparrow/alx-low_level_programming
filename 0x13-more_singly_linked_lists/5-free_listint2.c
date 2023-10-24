#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - returns the largest of 3 numbers
 * @head: pointer to list
 * Return: largest number
 */

void free_listint2(listint_t **head)
{
	listint_t *p, *h;

	if (head)
	{
		p = *head;
		h = p;
		while (p->next)
		{
			p = p->next;
			free(h);
			h = p;
		}

		free(h);
		p = NULL;
		h = NULL;
		*head = NULL;
	}

}

