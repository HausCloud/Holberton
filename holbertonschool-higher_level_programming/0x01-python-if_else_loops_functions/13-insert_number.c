#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *ptr1 = *head, *ptr2 = *head, *new_node;

	if (*head == NULL)
		return (NULL);

	while (ptr1->n < number || ptr1->n == number)
		ptr1 = ptr1->next;

	while (ptr2->next != ptr1)
		ptr2 = ptr2->next;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = number;
	ptr2->next = new_node;
	new_node->next = ptr1;

	return (*head);
}
