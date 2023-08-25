#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculates the count of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: count of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
