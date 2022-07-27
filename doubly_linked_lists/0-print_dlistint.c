#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: struct containing the integer
 * Return: Number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
