#include "lists.h"

/**
 * free_listint2 - frees the linked list
 * @head: pointer to the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *emp;

	if (head == NULL)
		return;

	while (*head)
	{
		emp = (*head)->next;
		free(*head);
		*head = emp;
	}

	*head = NULL;
}
