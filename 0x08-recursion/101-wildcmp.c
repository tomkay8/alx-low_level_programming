#include "main.h"
/**
 * wildcmp - compares two strings and checks if they can be consider identical
 * @s1: first string
 * @s2: second string (can contain * as a wildcard)
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	/* if both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
	return (1);

	/* if s2 is "*", we can match any remaining characters in s1 */
	if (*s2 == '*')
	{
	if (*(s2 + 1) == '\0')
	return (1);

	if (*s1 != '\0' && wildcmp(s1 + 1, s2))
	return (1);

	/* try matching the remaining characters in s1 with s2 */
	return (wildcmp(s1, s2 + 1));
	}

	/* if the characters match, continue with the next ones */
	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));

	/* if the characters don't match, the strings are not identical */
	return (0);
}
