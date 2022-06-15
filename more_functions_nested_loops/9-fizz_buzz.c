#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * Return: Always 0
 */

int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0 && i % 5 == 0))
			printf("%s ", "FizzBuzz");
		else if ((i % 3) == 0)
			printf("%s ", "Fizz");
		else if ((i % 5) == 0)
			printf("%s ", "Buzz");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return (0);
}
