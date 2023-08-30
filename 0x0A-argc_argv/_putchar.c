#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned and errnoi is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
