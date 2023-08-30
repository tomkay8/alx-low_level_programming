#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - creates a duplicate of a string in a new memory location
 * @str: the input string to be duplicated
 * Return: A pointer to the newly allocated duplicated string, Null if fail
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	dup_str = malloc(sizeof(char) * (i + 1));

	if (dup_str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		dup_str[len] = str[len];

	return (dup_str);
}
