#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: digit 0 through 9
 * Return: Returns 1 if is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
