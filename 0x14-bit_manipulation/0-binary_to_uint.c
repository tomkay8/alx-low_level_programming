#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned int.
 * @b: A oint to the binary strings (0s and 1s)
 *
 * Return: The converted unsigned int, or 0 if there are invalid
 * 	characters or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '\0')
		{
			return (0);
		}

		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}
