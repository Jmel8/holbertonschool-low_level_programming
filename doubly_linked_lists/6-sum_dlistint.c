#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a linked list
 * @head: struct containing the integer
 * sums all elements of a linked list
 * Return: Sum or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		if (head->n)
			sum += head->n;
		head = head->next;
	}
	return (sum);
}
