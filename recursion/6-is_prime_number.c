#include "main.h"

int number_prime(int, int);

/**
 * is_prime_number - prime identifier
 * @n: a integer
 * Return: a integer
 */
int is_prime_number(int n)
{
	return (number_prime(n, 1));
}
/**
 * number_prime - it check prime numbers
 * @n: a integer
 * @i: iterator
 * Return: 1 or 0 or number_prime
 */
int number_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (number_prime(n, i + 1));
}
