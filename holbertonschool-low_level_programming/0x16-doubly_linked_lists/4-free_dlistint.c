#include "lists.h"

/**
 * free_dlistint - free linked list passed as argument
 * @head: linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr1 = head, *ptr2 = head;

	while (ptr1 != NULL)
	{
		if (ptr2->next != NULL)
		{
			ptr2 = ptr2->next;
			free(ptr1);
			ptr1 = ptr2;
		}
		else
		{
			free(ptr2);
			return;
		}
	}
}
