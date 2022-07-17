#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to head
 * @str: String to be duplicated
 * Return: New node pointer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
