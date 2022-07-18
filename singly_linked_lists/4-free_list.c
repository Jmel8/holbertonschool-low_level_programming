#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: Head of the list
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
