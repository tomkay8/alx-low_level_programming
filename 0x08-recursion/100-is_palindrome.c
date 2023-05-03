#include "main.h"

int check_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
	return (1);
	return (check_palindrome(s, 0, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - recursively checks if a string is a palindrome
 * @s: string to check
 * @start: starting index of the string to check
 * @end: ending index of the string to check
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	return (1);
	if (*(s + start) != *(s + end))
	return (0);
	return (check_palindrome(s, start + 1, end - 1));
}
