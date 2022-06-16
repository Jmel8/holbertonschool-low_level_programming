#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: a integer
 * @b: a integer
 * Return: No return
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
