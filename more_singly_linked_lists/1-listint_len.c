#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: struct containing the elements
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->n)
		{
			counter++;
		}
		h = h->next;
	}
	return (counter);
}
