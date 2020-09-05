#include "lists.h"

/**
 * print_dlistint - print all elements of each node
 * @h: pointer to beginning of list
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *ptr = h;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count += 1;
		ptr = ptr->next;
	}

	return (count);
}
