#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: Address of linked list
 * @n: int New value
 * Return: New node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *end = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;
	return (new);
}
