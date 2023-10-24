#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - returns the largest of 3 numbers
 * @head: pointer to list
 * @n: number
 * Return: largest number
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);
	p->next = malloc(sizeof(listint_t *));

	if (!p->next)
		return (NULL);
	p->n = n;
	p->next = *head;

	*head = p;
	return (p);

}

