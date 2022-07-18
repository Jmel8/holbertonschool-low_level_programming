#include "lists.h"

/**
 * free_listint - frees a list
 * @head: Address of the current head of the list
 * Return: None
 */

void free_listint(listint_t *head)
{
	listint_t *i = head;

	while (head)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
