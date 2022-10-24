#include "lists.h"

/**
 * print_listint - function that prints all elements of a listint_t list
 *
 * @h: the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeno = 0;

	while (h)
	{
		printf("%d", h->n);
		nodeno++;
		h = h->next;
	}
	return (nodeno);
}
