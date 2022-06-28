#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: a integer
 * @argv: an array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, k, num, result;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
