#include "lists.h"

/**
 * sum_dlistint - get sum of all integers(n) in list
 * @head: list passed
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
