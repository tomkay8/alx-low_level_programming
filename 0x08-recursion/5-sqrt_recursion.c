#include "main.h"

int calculateSquareRoot(int n, int k);

/**
 * _sqrt_recursion - returns the integer square root of a given number.
 * @n: The number to calculate the square root of.
 *
 * Return: The integer square root of n, or -1 if n is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calculateSquareRoot(n, 0));
}

/**
 * calculateSquareRoot - recursively finds the integer
 * square root of a number.
 * @n: number to calculate the sqaure root of.
 * @k: the current guess for the square root.
 *
 * Return: the integer square root of n, or -1 if no exact root exists.
 */
int calculateSquareRoot(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (i);
	return (calculateSquareRoot(n, k + 1));
}

