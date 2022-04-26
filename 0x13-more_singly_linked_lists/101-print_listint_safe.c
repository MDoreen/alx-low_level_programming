#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: head of a linked list.
 *
 * Return: void
 */
void free_list(listp_t **head)
{
	listp_t *temp;
	listp_t *temp2;

	if (head != NULL)
	{
		temp2 = *head;
		while ((temp = temp2) != NULL)
		{
			temp2 = temp2->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of a linked list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listp_t *hpointer, *new, *add;

	hpointer = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hpointer;
		hpointer = new;

		add = hpointer;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&hpointer);
				return (size);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		size++;
	}

	free_list(&hpointer);
	return (size);
}
