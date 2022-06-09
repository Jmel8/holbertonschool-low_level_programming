#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int o;
i = 97;
o = 65;
while (i <= 122)
	{
	putchar(i);
	i++;
	}
while (o <= 90)
	{
	putchar(o);
	o++;
	}
	putchar(10);
return (0);
}
