#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: pointer to head in main function
 * @index: index of node to be deleted
 * Return: 1 on success and -1 on failure
 */

unsigned int node_counter(dlistint_t *ptr)
{
	unsigned int node_count = 0;

	while (ptr != NULL)
		node_count += 1, ptr = ptr->next;

	return (node_count);
}

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1 = (*head), *ptr2 = (*head);
	unsigned int node_count, count = 0;

	if ((*head) == NULL)
		return (-1);

	node_count = node_counter(*head);
	if (index > node_count)
		return (-1);

	if (node_count == 1)
	{
		(*head) = NULL, free(ptr1);
		return (1);
	}

	if (index == 0)
	{
		(*head) = (*head)->next, (*head)->prev = NULL, free(ptr1);
		return (1);
	}

	while (count < index)
	{
		count++, ptr1 = ptr1->next;
		if (node_count == count)
		{
			ptr2 = ptr1->prev, free(ptr1), ptr2->next = NULL;
			return (1);
		}
	}
	ptr2 = ptr1->prev, ptr1 = ptr1->next, free(ptr2->next);
	ptr2->next = ptr1, ptr1->prev = ptr2;

	return (1);
}
