#include "lists.h"

/**
 * add_dnodeint_end - add node at end of list
 * @head: head of list passed
 * @n: integer passed
 * Return: head of list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = *head, *new_node, *ptr;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;
	ptr = tail->next;
	ptr->prev = tail;

	return (new_node);
}
