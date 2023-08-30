#include <stdio.h>
#include "main.h"

/**
 * main - entry point to idsplay the count of program arguments
 * @argc: count of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
