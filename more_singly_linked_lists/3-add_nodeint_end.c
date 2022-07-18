#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: address
 * @n: number to added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (i = *head; i->next; i = i->next)
	{}
	i->next = new;
	return (new);
}
