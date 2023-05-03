#include "main.h"

/**
 * _print_rev_recursion - Function to print a string in reverse to stdout
 * @s: string to be printed.
 */
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		/* Recursively call the function with the next character */
		_print_rev_recursion(s + 1);
		_putchar(*s);
}
