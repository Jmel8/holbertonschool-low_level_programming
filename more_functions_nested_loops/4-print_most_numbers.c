 #include "main.h"
/**
 * print_most_numbers - do not print 2 and 4
 * Return: Void
 */
void print_most_numbers(void)
{
	int i = 47;

	while (i < 57)
	{
		i++;
		if (i != 50 && i != 52)
		_putchar(i);
	}
	_putchar(10);
}
