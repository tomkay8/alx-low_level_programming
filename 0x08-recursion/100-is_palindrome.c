#include <stdio.h>

/**
 * main - serves as the driver function for testing the function
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;
	int i;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
			return (0);
	}

	return (1);
}

int main(void)
{
	char *str1 = "radar";
	char *str2 = "hello";

	printf("%d\n", is_palindrome(str1)); /* Output: 1 */
	printf("%d\n", is_palindrome(str2)); /* Output: 0 */

	return (0);
}

