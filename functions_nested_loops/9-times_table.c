#include "main.h"
/**
 * times_table - prints every minute of the day
 * Return: Void
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			p = (i * j);
			if (p <= 9)
			{
				_putchar(' ');
				_putchar((p % 10) + '0');
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
