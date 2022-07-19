#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Struct containing the integer
 * @idx: Desired index
 * @n: Number to insert
 * Return: The address of the new node, NULL if fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *t, *prev, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == '\0')
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0, t = *head; i < idx - 1; i++, t = t->next)
	{
		if (t->next == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	prev = t->next;
	new->n = n;
	t->next = new;
	new->next = prev;

	return (new);
}
