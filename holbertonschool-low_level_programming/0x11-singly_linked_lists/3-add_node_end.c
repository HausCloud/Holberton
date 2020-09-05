#include "lists.h"

/**
 * _strlen - find length of strdup(str)
 * @a: string of new node struct
 * Return: int count
 */


int _strlen(const char *a)
{
	int count = 0;

	while (a[count] != '\0')
		count++;

	return (count);
}

/**
 * add_node_end - add node to the beginning of head
 * @head: head is a double pointer of list_t type
 * @str: str is a pointer to a character constant
 * Return: new address of the element
 */


list_t *add_node_end(list_t **head, const char *str)
{

	list_t *nodey = malloc(sizeof(list_t));
	list_t *tail = *head;

	if (nodey == NULL)
		return (NULL);

	nodey->str = strdup(str);
	nodey->len = _strlen(str);
	nodey->next = NULL;

	if (*head == NULL)
	{
		*head = nodey;
		return (nodey);
	}

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = nodey;

	return (nodey);
}
