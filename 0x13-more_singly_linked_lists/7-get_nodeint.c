#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list
 *
 * @head: pointer to the node list
 * @index: index of the node
 *
 * Return: the node or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp  = tmp->next;
		i++;
	}
	return (tmp ? tmp : NULL);
}
