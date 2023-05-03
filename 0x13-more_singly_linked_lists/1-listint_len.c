#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked lists
 * @h: linked list of type listint_t to be traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}
	return (count);
}
