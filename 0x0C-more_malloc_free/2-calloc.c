#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills a block of memory with a constant byte
 * @s1: pointer to the memory area to be filled
 * @s2: byte to copy
 * @n: number of times to copy s2
 *
 * Return: pointer to the memory area s1
 */
char *_memset(char *s1, char s2, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s1[i] = s2;
	}

	return (s1);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
