#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: Head of the list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	nodes = 0;

	if (h == NULL)
		return (nodes);

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
