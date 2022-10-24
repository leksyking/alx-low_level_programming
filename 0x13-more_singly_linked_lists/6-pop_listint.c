#include "lists.h"

/**
 * pop_listint - a function  that deletes the head node  of a listint_t
 * linked list and returns the head node's data(n)
 *
 * @head: pointer to the first node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int head_data;

	if (!head || !*head)
		return (0);
	head_data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (head_data);
}
