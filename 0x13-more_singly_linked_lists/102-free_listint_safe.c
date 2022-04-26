#include "lists.h"
/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listp_t *hpointer, *new, *add;
	listint_t *temp;

	hpointer = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hpointer;
		hpointer = new;

		add = hpointer;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_list(&hpointer);
				return (size);
			}
		}

		temp = *h;
		*h = (*h)->next;
		free(temp);
		size++;
	}

	*h = NULL;
	free_list(&hpointer);
	return (size);
}
