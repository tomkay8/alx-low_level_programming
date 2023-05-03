#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	/* If n is negative, return -1 to indicate an error */
	if (n < 0) {
	return -1;
	}
	else if (n == 0) {
	return 1;
	}
	/* Otherwise, recursively call the function with n-1 and multiply the result by n */
	else {
	return n * factorial(n-1);
	}
}
