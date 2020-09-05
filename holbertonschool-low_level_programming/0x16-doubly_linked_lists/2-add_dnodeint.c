#include "lists.h"

/**
 * add_dnodeint - add a new node at beginning of list
 * @head: pointer to address of head in main function
 * @n: integer argument passed
 * Return: new list of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr;

	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	ptr = new_node;
	if (ptr->next != NULL)
		ptr = ptr->next, ptr->prev = new_node;

	return (new_node);
}
