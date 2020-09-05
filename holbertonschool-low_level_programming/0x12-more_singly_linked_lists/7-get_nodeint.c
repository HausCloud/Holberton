#include "lists.h"

/**
 * get_nodeint_at_index - get nth node
 * @head: pointer to address of head in main file
 * @index: integer passed
 * Return: ptr to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	while (counter < index)
	{
		ptr = ptr->next;
		counter++;
	}

	return (ptr);
}
