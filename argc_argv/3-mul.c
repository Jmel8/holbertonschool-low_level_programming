#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Numbers to multiply
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	if (argc > 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	}
	return (0);
}
