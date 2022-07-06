#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * @array: array to iterate
 * @size: values to print
 * @action: function
 * Return: No return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size && action != NULL)
		for (i = 0; i <= (size - 1); i++)
		{
		action(array[i]);
		}
}
