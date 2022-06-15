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
	i = 1;
	while (i <= n)
	{
		i++;
		j = 1;
		while (j < i)
		{
			j++;
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
}
