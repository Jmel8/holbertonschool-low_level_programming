#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: struct containing the integer
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->n)
			printf("%i\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
