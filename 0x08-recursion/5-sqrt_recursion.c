#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 *         square root.
 */
int _sqrt_recursion(int n)
{
	/* If n is negative, there is no natural square root */
	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (n);
	/**
	 * We search for the square root of n by trying all
	 * possible values up to n/2.
	 */
	int i;

	for (i = 1; i <= n / 2; i++)
	{
	/* If we find the square root, we return it */
	if (i * i == n)
	return (i);

	/**
	 * If i^2 is greater than n, we know that there is no natural
	 * square root of n.
	 */
	if (i * i > n)
	return (-1);
	}
	/* If we reach this point, there is no natural square root of n */
	return (-1);
}
