#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: value of array
 * @cmp: comparer function
 * Return: index of the element gotten by cmp
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
