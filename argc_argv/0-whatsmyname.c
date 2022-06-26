#include <stdio.h>

/**
 * main - prints its name
 * @argc: a integer
 * @argv: array
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
