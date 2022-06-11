#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * Return: Void
 */
void jack_bauer(void)
{
	int hor, min;

	for (hor = 0; hor < 24; hor++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (hor / 10));
			_putchar('0' + (hor % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
