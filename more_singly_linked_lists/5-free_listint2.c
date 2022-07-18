#include "lists.h"

/**
 * free_listint2 - frees a linked list and set its head to NULL
 * @head: Address
 * Return: None
 */

void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
}
