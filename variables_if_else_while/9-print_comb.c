#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
i = 48;
while (i <= 57)
{
	putchar(i);
	i++;
	if (i < 58)
	{
	putchar(',');
	putchar(' ');
	}
}
putchar(10);
return (0);
}
