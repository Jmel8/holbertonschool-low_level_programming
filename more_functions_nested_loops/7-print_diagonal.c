#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: is the number of times the character \ should be printed
 * Return: Void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar(10);
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
}
