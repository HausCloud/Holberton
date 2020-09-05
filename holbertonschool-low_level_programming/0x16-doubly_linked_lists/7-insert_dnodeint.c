#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to head in main function
 * @idx: index of node to inserted
 * @n: data for node
 * Return: head of new list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *ptr1 = *h, *ptr2 = *h, *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if ((*h) == NULL)
	{
		(*h) = new_node, new_node->next = NULL, new_node->prev = NULL;
		return (new_node);
	}
	if (idx == 0 && (*h) != NULL)
	{
		new_node->next = (*h), (*h)->prev = new_node, (*h) = new_node;
		return (*h);
	}
	else
	{
		while (count < idx)
		{
			if (ptr1 == NULL)
			{
				free(new_node);
				return (NULL);
			}
			ptr1 = ptr1->next, count += 1;
		}
		ptr2 = ptr1->prev;
		ptr2->next = new_node, new_node->prev = ptr2;
		new_node->next = ptr1, ptr1->prev = new_node;
	}
	return (new_node);
}
