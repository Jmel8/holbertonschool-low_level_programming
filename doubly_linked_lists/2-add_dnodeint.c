#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 * @head: Address of linked list
 * @n: integer to print
 * Return: new node pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}
	new->prev = NULL;
	*head = new;
	return (new);
}
