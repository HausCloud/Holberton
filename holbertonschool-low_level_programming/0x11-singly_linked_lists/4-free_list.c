#include "lists.h"

/**
 * free_list - free the linked list
 * @head: uhh.
 */

void free_list(list_t *head)
{
	list_t *headptr = head;

	while (head != NULL)
	{
		head = head->next;
		free(headptr->str);
		free(headptr);
		headptr = head;
	}
}
