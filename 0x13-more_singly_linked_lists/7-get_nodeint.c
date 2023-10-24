#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the largest of 3 numbers
 * @head: pointer to list
 * @index: index
 * Return: largest number
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int idx = 0;

	if (head)
	{
		p = head;

		while (p->next)
		{
			if (idx == index)
				return (p);
			p = p->next;
			idx++;
		}

		p = NULL;
		return (NULL);
	} else
		return (NULL);
}

