#include "lists.h"

/**
 * add_nodeint_end - add node to the end of the list
 * @head: points to what head is pointing in the main file
 * @n: integer
 * Return: address of head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodey;
	listint_t *tail = *head;

	nodey = malloc(sizeof(listint_t));

	if (nodey == NULL)
		return (NULL);

	nodey->n = n;
	nodey->next = NULL;

	if (*head == NULL)
	{
		*head = nodey;
		return (nodey);
	}

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = nodey;

	return (*head);
}
