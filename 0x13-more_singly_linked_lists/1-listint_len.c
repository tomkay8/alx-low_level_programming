#include "lists.h"

/**
 * listint_len - returns the number of elements in the linked list
 * @h: pointer to the listint_t list
 *
 * Return: number of elements in h
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count))
}
