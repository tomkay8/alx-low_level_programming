#include "lists.h"

/**
 * add_nodeint -To add a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodes;

	new_nodes = malloc(sizeof(listint_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);
}

