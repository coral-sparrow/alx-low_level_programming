#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - returns the largest of 3 numbers
 * @head: pointer to list
 * @n: number
 * Return: largest number
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *t;

	p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (!(*head))
	{
		*head = p;
		return (p);
	}

	t = *head;
	while (t->next)
		t = t->next;
	t->next = malloc(sizeof(listint_t *));
	if (!t->next)
		return (NULL);

	t->next = p;

	return (p);

}

