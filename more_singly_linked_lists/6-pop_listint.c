#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Address
 * Return: Data of node deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *i;
	int j;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	i = *head;
	*head = (*head)->next;
	j = i->n;
	free(i);
	return (j);
}
