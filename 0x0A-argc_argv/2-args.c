#include <stdio.h>
#include "main.h"

/**
 * main - entry point to display all received argments
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
