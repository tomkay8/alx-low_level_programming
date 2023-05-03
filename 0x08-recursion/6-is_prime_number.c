#include "main.h"

/**
 * search_prime - checks if a number is prime
 * @n: the number to check
 * @i: the divisor to check against
 *
 * Return: 1 if prime, 0 otherwise
 */
int search_prime(int n, int i)
{
	if (i * i > n)
	return (1);
	if (n % i == 0)
	return (0);
	return (search_prime(n, i + 2));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
	return (0);
	if (n == 2)
	return (1);
	if (n <= 1)
	return (0);
	return (search_prime(n, 3));
}
