#include "lists.h"

/**
 * list_len - a function  that returns  the number of
 * elements in a linked list
 *
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t number;

	number = 0;
	while (h != NULL)
	{
		h = h->next;
		number++;
	}
	return (number);
}
