#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdarg.h>

/**
 * form_t - type struct
 * @fmt: char
 * @f: pointer to function
 */
typedef struct form_t
{
	char fmt;
	void (*f)(va_list list);
}form;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
