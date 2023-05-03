#include "main.h"
/**
 * _puts_recursion - function to recursively print a sting to stdout
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		/* Print the current characte */
		_putchar(*s);

		/* call the function with the next character */
		_puts_recursion(s + 1);
	}
	else
	{
		/* To print a newline character */
		_putchar('\n');
	}
}
