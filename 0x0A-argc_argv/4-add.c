#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - checks if a string contains only digits
 * @str: the input string
 *
 * Return: 1 if the string contains only digits, 0 otherwse
 */
int check_num(char *str)
{
	unsigned int index;

	index = 0;
	while (index < strlen(str))

	{
		if (!isdigit(str[index]))
		{
			return (0);
		}

		index++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	int index;
	int str_to_int;
	int sum = 0;

	index = 1;
	while (index < argc)
	{
		if (check_num(argv[index]))

		{
			str_to_int = atoi(argv[index]);
			sum += str_to_int;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		index++;
	}

	printf("%d\n", sum);

	return (0);
}
