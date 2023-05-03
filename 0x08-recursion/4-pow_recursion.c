#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	/* If y is greater than 1, compute x raised to the power of y - 1 */
	if (y > 1)
	return (x * _pow_recursion(x, y - 1));

	/* Base case: If y is 0, the result is always 1 */
	if (y == 0)
	return (1);

	/* Base case: If y is 1, the result is always x */
	if (y == 1)
	return (x);

	/* If y is negative, the function should return -1 */
	return (-1);
}
