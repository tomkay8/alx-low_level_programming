#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: double pointers to the head of the listint_t list
 *
 * Return: pointers to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (prev);
}

