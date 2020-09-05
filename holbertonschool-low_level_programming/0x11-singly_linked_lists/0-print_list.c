#include "lists.h"

/**
 * print_list - print all elements of list_t
 * @h: pointer to const list_t
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		h = h->next;
	}

	return (count);
}
