#include "main.h"

int palCheck(char *s, int startInd, int endInd);
int calStrLen(char *s);

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palCheck(s, 0, calStrLen(s)));
}

/**
 * calStrLen - calculates the length of a string recursively
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int calStrLen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + calStrLen(s + 1));
}

/**
 * palCheck - checks the characters recursively for palindrome
 * @s: string to check
 * @startInd: the starting index of the current substring.
 * @endInd: the ending index of the current substring.
 *
 * Return: 1 if the substring is palindrome, 0 if not
 */
int palCheck(char *s, int startInd, int endInd)
{
	if (*(s + startInd) != *(s + endInd - 1))
		return (0);
	if (startInd >= endInd)
		return (1);
	return (palCheck(s, startInd + 1, endInd - 1));
}

