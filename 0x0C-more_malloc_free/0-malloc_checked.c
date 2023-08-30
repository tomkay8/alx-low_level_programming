#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc function
 * @b: number of bytes to allocate memory for
 *
 * Return: a pointer to the allocated memory, terminates the program if fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
