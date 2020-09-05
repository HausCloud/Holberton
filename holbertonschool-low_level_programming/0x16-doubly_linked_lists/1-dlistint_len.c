#include "lists.h"

/**
 * dlistint_len - get length of list
 * @h: pointer to beginning of list
 * Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
		count += 1, ptr = ptr->next;

	return (count);
}
