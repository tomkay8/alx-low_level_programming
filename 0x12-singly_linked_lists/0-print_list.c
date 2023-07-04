#include <stdio.h>
#include "lists.h"

/**
 * print_list - this prints every element of a linked list
 * @h: this is the pointer to the list_t list to be printed
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
