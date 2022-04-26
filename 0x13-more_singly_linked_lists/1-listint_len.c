#include "lists.h"
/**
 * listint_len - gets the number of elements in
 * a linked list.
 * @h: singly linked list.
 *
 * Return: the numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
