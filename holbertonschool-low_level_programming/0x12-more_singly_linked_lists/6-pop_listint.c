#include "lists.h"

/**
 * pop_listint - delete the head node and return data
 * @head: pointer to head in main file
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int temp = ptr->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(ptr);

	return (temp);
}
