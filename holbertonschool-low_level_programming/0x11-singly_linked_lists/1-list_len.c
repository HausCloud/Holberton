#include "lists.h"

/**
 * list_len - return count of elements
 * @h: h is a pointer to a constant list_t struct
 * Return: element counter
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
