#include "lists.h"

/**
 * free_listint - free the singly linked list
 * @head: address of head
 */

void free_listint(listint_t *head)
{
	listint_t *headptr = head;

	while (headptr != NULL)
	{
		head = head->next;
		free(headptr);
		headptr = head;
	}
}
