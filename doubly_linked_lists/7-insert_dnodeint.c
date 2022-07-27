#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Address of linked list
 * @idx: desired index
 * @n: number to insert
 * Return: New node, 0 if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *i = *h;

	if (*h == NULL && idx)
		return (NULL);
	if (idx == '\0')
		return (add_dnodeint(h, n));
	for (; i->next && idx; i = i->next, idx--)
		continue;
	if (i->next == NULL && idx > 1)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (i->next || (!(i->next) && !idx))
		i = i->prev;
	new->next = i->next;
	new->prev = i;
	if (i->next)
		i->next->prev = new;
	i->next = new;
	return (new);
}
