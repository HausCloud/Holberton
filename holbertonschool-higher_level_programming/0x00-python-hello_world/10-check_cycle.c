#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - checks if linked list contains a cycle
 * @list: head of list
 * Return: 0 on failure, 1 on success
 */

int check_cycle(listint_t *list)
{
	listint_t *ptr1 = list, *ptr2 = list;

	if (list == NULL || list->next == NULL)
		return (0);

	while (ptr2 != NULL)
	{
		while (ptr1 != ptr2)
		{
			if (ptr2->next == ptr1)
				return (1);
			ptr1 = ptr1->next;
			if (ptr1 == ptr2)
			{
				ptr1 = list;
				break;
			}
		}
			ptr2 = ptr2->next;
	}

	return (0);
}
