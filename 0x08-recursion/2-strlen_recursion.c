#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Initialize a variable to hold the length of the string */
	int measureS = 0;

	if (*s)
	{
	/* Increment the length by 1 for the current character */
	measureS++;
	/* call function with the next character and add the result to the length */
	measureS += _strlen_recursion(s + 1);
	}

	return (measureS);
}
