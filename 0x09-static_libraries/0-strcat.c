#include "main.h"
 /**
 * _strcat - appends the content of one string to another
 * @dest: the string to which content is appended
 * @src: the string whose content is appended
 *
 * Return: a pointer to the concatenated string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	dest[i] = '\0';
	return (dest);
}

