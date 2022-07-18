#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list
 * @head: Address
 * Return: The sum of all the nodes, if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	listint_t *i;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (i = head; i; i = i->next)
		sum += i->n;
	return (sum);
}
