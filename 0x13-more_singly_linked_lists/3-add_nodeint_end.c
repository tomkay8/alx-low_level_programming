#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes;
	listint_t *temp = *head;

	new_nodes = malloc(sizeof(listint_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_nodes;

	return (new_nodes);
}
