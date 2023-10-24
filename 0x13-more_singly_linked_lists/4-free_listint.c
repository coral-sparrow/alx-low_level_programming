#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - returns the largest of 3 numbers
 * @head: pointer to list
 * Return: largest number
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head)
	{
		p = head;

		while (p->next)
		{
			p = p->next;
			free(head);
			head = p;
		}

		free(head);
		p = NULL;
	}

}

