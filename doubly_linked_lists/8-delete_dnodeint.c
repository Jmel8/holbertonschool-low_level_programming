#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to list head
 * @index: Index
 * Return: 1 if successfull, 0 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *i = *head, *i2;

	if (*head == NULL)
		return (-1);
	if (index == '\0')
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(i);
		return (1);
	}
	for (; i && index; i = i->next, index--)
		continue;
	if (i == NULL)
		return (-1);
	i2 = i;
	i = i->prev;
	i->next = i2->next;
	if (i->next)
		i->next->prev = i;
	free(i2);
	return (1);
}
