#include "main.h"

int checkForPrime(int n, int k);

/**
 * is_prime_number - determines if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if it's not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkForPrime(n, n - 1));
}

/**
 * checkForPrime - checks if a number is prime recursively
 * @n: number to evaluate
 * @k: The current divisor being checked.
 *
 * Return: 1 if n is prime, 0 if it's not
 */
int checkForPrime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (checkForPrime(n, k - 1));
}

