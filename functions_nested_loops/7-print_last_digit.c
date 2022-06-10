#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: variable
 * Return: Always 0
 */
int print_last_digit(int i)
{
	int o;

	o = (i % 10);
	if (o >= 0)
	{
		_putchar(o + '0');
		return (o);
	}
	else
	{
		_putchar(-o + '0');
		return (-o);
	}
}
