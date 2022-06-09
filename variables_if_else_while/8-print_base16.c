#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int n;
i = 48;
n = 97;
while (i <= 57)
{
	putchar(i);
	i++;
}
while (n <= 102)
{
	putchar(n);
	n++;
}
putchar(10);
return (0);
}
