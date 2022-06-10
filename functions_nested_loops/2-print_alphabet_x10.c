#include "main.h"
/**
 * print_alphabet_x10 - Entry variables
 *
 *
 */
void print_alphabet_x10(void)
{
	char i;
	int o;

	for (o = 1; o <= 10; o++)
	{
		i = 97;
		for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
		_putchar(10);
	}
}
