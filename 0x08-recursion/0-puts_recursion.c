#include "main.h"
/**
 * _puts_recursion - Recursive function to display a string.
 * @s: Pointer to the input string.
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

