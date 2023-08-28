#include "main.h"
/**
 * _memset - fill a region of memory with a specific value
 * @s: pointer to the start of the memory region
 * @b: the byte to fill the memory with.
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory region after filling.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
