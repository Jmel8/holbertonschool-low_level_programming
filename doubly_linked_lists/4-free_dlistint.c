#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: linked list
 * Return: None.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *end = head;

	while (head)
	{
		end = head;
		head = head->next;
		free(end);
	}
}
