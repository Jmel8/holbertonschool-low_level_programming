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
	dlistint_t *i = *h;
	dlistint_t *node;
	unsigned int count;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (free(node), NULL);
	node->n = n;
	if (*h == NULL)
		return (free(node), NULL);
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	for (count = 0; count != idx; count++)
	{
		if (i->next)
			i = i->next;
		else
			break;
	}
	if (idx == count + 1)
	{
		node->prev = i;
		i->next = node;
		node->next = NULL;
	}
	else if (idx == count)
	{
		node->prev = i->prev;
		node->next = i;
		i->prev->next = node;
		i->prev = node;
	}
	else
		return (free(node), NULL);
	return (node);
}
