#include "lists.h"

/**
 * insert_nodeint_at_index - add node at index
 * @head: pointer to head in main file
 * @idx: index of node in list
 * @n: integer given to put in new node
 * Return: pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *ptr1 = *head, *ptr2 = *head;
	unsigned int idx2 = 0;
	listint_t *nodey;

	if (idx == idx2)
		return (NULL);
	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);

	nodey = malloc(sizeof(listint_t));
	if (nodey == NULL)
		return (NULL);

	nodey->n = n;

	while (idx2 < (idx - 1))
	{
		ptr1 = ptr1->next;
		idx2++;
	}

	idx2 = 0;

	while (idx2 < idx)
	{
		ptr2 = ptr2->next;
		idx2++;
	}

	ptr1->next = nodey;
	nodey->next = ptr2;

	return (nodey);
}
