#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: Pointer to list head
 * @index: Point of deletion
 * Return: 1 on success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t i;
	listint_t *t, *prev;

	if (*head == NULL)
		return (-1);

	t = *head;
	if (index == '\0')
	{
		t = (*head)->next;
		free(*head);
		*head = t;
		return (1);
	}
	for (i = 0; i < index - 1; i++, t = t->next)
	{
		if (t->next == NULL)
			return (-1);
	}
	prev = t->next->next;
	free(t->next);
	t->next = prev;

	return (1);
}
