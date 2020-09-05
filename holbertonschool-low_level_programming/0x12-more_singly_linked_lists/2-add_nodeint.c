#include "lists.h"

/**
 * add_nodeint - add note to the beginning of the list
 * @head: points to what head is pointing in the main file
 * @n: integer
 * Return: first address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodey;

	nodey = malloc(sizeof(listint_t));

	if (nodey == NULL)
		return (NULL);

	nodey->n = n;
	nodey->next = *head;

	*head = nodey;

	return (nodey);
}
