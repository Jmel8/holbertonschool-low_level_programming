#include "main.h"
/**
 * print_triangle - function that prints a triangle
 * @size: is the size of the triangle
 * Return: Void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar(10);
	for (i = 0; i < size; i++)
	{
		for (j = size; j - 1 > i; j--)
		{
			_putchar(' ');
		}
		for (j = 0; j - 1 < i; j++)
		{
			_putchar('#');
		}
	_putchar(10);
	}
}
