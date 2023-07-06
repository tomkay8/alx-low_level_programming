#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index
 * in a listint_t list
 * @head: double pointer to the head of the listint_t list
 * @index: index of the node to delete, starting at 0
 *
 * Return: 1 if it succeeds, or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);

		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);

	return (1);
}
