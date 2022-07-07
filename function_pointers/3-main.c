#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - arithmethic operations
 * @argc: counter of arguments
 * @argv: arguments to check
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
	argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	k = (*get_op_func(argv[2]))(num1, num2);
	printf("%i\n", k);
	return (0);
}
