#include "lists.h"

/**
 * sum_listint - run through list and add up sum n
 * @head: pointer to head in main function
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
