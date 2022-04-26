#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: head node's data(n).
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *h;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;

	head_node = temp->n;

	h = temp->next;

	free(temp);

	*head = h;

	return (head_node);
}
