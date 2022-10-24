#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: a pointer to the pointer of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp  = (*head)->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
