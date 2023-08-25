#include <stdio.h>

void first(void) __attribute__((constructor));

/**
 * first - Displays a message before the main
 *
 * function begins its execution
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I carried my home on my back!\n");
}
