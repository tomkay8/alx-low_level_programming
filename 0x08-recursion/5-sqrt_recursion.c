#include "main.h"

/**
 * actual_sqrt_recursion - Recurses to find the natural square root of a number
 *
 * @n: The number to calculate the square root of
 * @y: The iterator
 *
 * Return: The resulting square root, or -1 if n does not have a natural square
 *         root
 */
int actual_sqrt_recursion(int n, int y)
{
	/* If y^2 is greater than n, there is no natural square root */
	if (y * y > n)
	return (-1);

	/* If y^2 is equal to n, we've found the natural square root */
	if (y * y == n)
	return (y);

	/* Recurse with y + 1 to try the next possible value */
	return (actual_sqrt_recursion(n, y + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number to calculate the square root of
 *
 * Return: The resulting square root, or -1 if n does not have a natural square
 *         root
 */
int _sqrt_recursion(int n)
{
	/* If n is negative, there is no natural square root */
	if (n < 0)
	return (-1);

	return (actual_sqrt_recursion(n, 0));
}
