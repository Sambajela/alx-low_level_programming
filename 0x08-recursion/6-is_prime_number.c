#include "main.h"

/**
 * is_prime - returns the 1 if n is prime
 * @n: num to be checked
 * @start: parm
 *
 * Return: 1 if prime 0 if otherwise
 *
 */
int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}

/**
 * is_prime_number - checs if a number is prime
 * @n: number to be checked
 *
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
