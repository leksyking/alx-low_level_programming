#include "lists.h"

/**
 * sum_listint - function that returns the sum of all data in the list
 *
 * @head: the listint_t linked  list
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		i += tmp->n;
		tmp = tmp->next;
	}
	return (i);
}
