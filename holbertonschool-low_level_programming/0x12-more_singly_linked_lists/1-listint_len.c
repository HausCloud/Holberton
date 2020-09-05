#include "lists.h"

/**
 * listint_len - count number of notes in linked list
 * @h: pointer to new struct memory in main file
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
