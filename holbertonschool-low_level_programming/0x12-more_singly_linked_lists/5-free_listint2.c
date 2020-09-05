#include "lists.h"

/**
 * free_listint2 - free list and set head to null
 * @head: points to the head in the main file
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr1 = *head;
	listint_t *ptr2 = ptr1;

	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		free(ptr2);
		ptr2 = ptr1;
	}

	*head = NULL;
	head = NULL;
}

/*
 * void free_listint2(listint_t **head)
 * {
 *	listint_t **dubptr = head;
 *
 *	while (*head != NULL)
 *	{
 *		*head = (*head)->next; // can use *head = (**head).next
 *		free(*dubptr);
 *		*dubptr = *head;
 *	}
 *
 *	*head = NULL;
 *  }
*/
