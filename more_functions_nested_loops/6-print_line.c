#include "main.h"
/**
 * print_line -  draws a straight line in the terminal
 * @n: line quantity
 * Return: Void
 */
void print_line(int n)
{
	while (n > 0)
	{
	_putchar(95);
	n--;
	if (n < 0)
		_putchar(10);
	}
	_putchar(10);
}
