#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * Return: No return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *j;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, char *);
		if (j == NULL)
			printf("(nil)");
		else
			printf("%s", j);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
