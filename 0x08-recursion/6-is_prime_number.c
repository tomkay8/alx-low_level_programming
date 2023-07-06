#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function to check prime number
 * @n: the number to be checked
 * @div: the divisor to check divisibility
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int div)
{
	if (div == n)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime_helper(n, div + 1));
}

