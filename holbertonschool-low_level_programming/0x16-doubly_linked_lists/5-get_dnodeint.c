#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node
 * @head: list passed
 * @index: nth place
 * Return: node position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int count = 0;

	while (count < index && ptr != NULL)
	{
		ptr = ptr->next;
		index -= 1;
	}

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
