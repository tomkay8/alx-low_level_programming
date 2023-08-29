#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked lists
 * @h: A pointer to the beginning of the list(head)
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

