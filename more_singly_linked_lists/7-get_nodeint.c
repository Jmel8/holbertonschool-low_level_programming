#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a linked list
 * @head: struct containing the elements
 * @index: Index of the nth node
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *i = head;

	while (i != NULL)
	{
		if (counter == index)
			return (i);
		counter++;
		i = i->next;
	}
	return (NULL);
}
