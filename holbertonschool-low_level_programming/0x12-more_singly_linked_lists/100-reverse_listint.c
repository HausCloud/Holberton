#include "lists.h"

/**
 *
 *
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1 = *head, *ptr2 = *head;

	while (ptr1 != NULL)
		ptr1 = ptr1->next;

	ptr2->next = NULL;
	*head = ptr1;

	return (*head);
}
