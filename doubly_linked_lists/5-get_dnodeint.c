#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a linked list
 * @head: struct containing the elements
 * @index: Index of node
 * Return: Address of node at index, NULL is not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *cpy = head;

	while (cpy != NULL)
	{
		if (count == index)
			return (cpy);
		count++;
		cpy = cpy->next;
	}
	return (NULL);
}
