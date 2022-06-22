#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: to reverse
 * @n: the number of elements of the array
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}
