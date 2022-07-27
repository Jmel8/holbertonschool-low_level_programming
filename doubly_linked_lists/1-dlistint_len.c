#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: struct containing the elements
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
