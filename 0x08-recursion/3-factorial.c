#include "main.h"

/**
 * factorial - calculates and returns the factorial of a number
 * @n:The number for which factorial is to be calculated.
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

