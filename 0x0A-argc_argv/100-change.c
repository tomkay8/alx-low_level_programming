#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - calculates the minimum number of coins needed for a money change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int number, i, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	result = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && number >= 0; i++)
	{
		while (number >= coins[i])
		{
			result++;
			number -= coins[i];
		}
	}

	printf("%d\n", result);
	return (0);
}
