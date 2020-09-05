#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to head in main file
 * @index: index
 * Return: 1 on success or -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr1 = *head, *ptr2 = *head, *ptr3 = *head;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr1);
	}
	else
	{
		while (count < (index - 1))
			count++, ptr1 = ptr1->next;
		count = 0;
		while (count < index)
			count++, ptr2 = ptr2->next;
		count = 0;
		while (count < (index + 1))
			count++, ptr3 = ptr3->next;
		free(ptr2);
		ptr1->next = ptr3;
	}

	return (1);
}
