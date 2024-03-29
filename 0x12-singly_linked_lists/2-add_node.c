#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a new node is added at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to be placed in the node
 *
 * Return: the address of the new element, or NULL if addition fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
	len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
	return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
