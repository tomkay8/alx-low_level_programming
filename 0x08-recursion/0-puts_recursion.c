#include "main.h"
/**
 * _puts_recursion - this function recursively prints a sting to stdout
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		/* Print the current characte */
		_putchar(*s);

		/* this calls the function with the next character */
		_puts_recursion(s + 1);
	}
	else
	{
		/* this will print a newline character */
		_putchar('\n');
	}
}
