#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 *
 * @head: the pointer to pointer of the list
 * @idx: index to insert a new node into
 * @n: data to insert
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp = *head;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (!*head && !idx)
	{
		*head = node;
		return (node);
	}
	else if (!*head && idx)
		return (NULL);
	else if (!idx)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	node->next = tmp->next;
	tmp->next = node;

	return (node);
}
