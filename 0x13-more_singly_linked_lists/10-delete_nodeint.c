#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: the linked list
 * @index: the index of the node to delete
 * Return: 1 if success and -1 if failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint *tmp = *head;
	listint_t *current = NULL;
	size_t i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
