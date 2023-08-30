#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two input strings to create a new string
 * @s1: first input string
 * @s2: second input string
 * Return: newly allocated string containing the concatenation of s1 and s2,
 * NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = len = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[len] != '\0')
		len++;
	concat = malloc(sizeof(char) * (i + len + 1));

	if (concat == NULL)
		return (NULL);
	i = len = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	while (s2[len] != '\0')
	{
		concat[i] = s2[len];
		i++, len++;
	}
	concat[i] = '\0';
	return (concat);
}
