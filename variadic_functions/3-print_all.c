#include "variadic_functions.h"

/**
 * print_all - function that prints char
 * @list: va_list 
 */
void c_f(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * i_f - print integers
 * @list: va_list
 */
void i_f(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * f_f - print floats
 * @list: va_list
 */
void f_f(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * s_f - print strings
 * @list: va_list
 */
void s_f(va_list list)
{
	char *i;

	i = va_arg(list, char *);

	if (i == NULL)
		i = "(nil)";
	printf("%s", i);
}

/**
 * print_all - print a formatted data
 * @format: format input
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	int k = 0;
	va_list ap;
	char *l = "";

	form arr[] = {
		{'c', c_f},
		{'i', i_f},
		{'f', f_f},
		{'s', s_f},
	};

	va_start(ap, format);

	while (format != NULL && format[j])
	{
		k = 0;
		while (k < 4)
		{
			if (format[j] == arr[k].fmt)
			{
				printf("%s", l);
				arr[k].f(ap);
				l = ", ";
			}
			k++;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
