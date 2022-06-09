#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: Head of the linked list
 *
 *
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elem;

	elem = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		elem++;
		h = h->next;
	}

	return (elem);
}
