#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint linked list
 *
 * @head: the pointer to the pointer of the list
 * Return: the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
