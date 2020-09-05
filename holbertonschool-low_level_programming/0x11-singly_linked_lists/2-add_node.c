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
 * add_node - add node to the beginning of head
 * @head: head is a double pointer of list_t type
 * @str: str is a pointer to a character constant
 * Return: new address of the element
 */


list_t *add_node(list_t **head, const char *str)
{

	list_t *nodey = malloc(sizeof(list_t));

	if (nodey == NULL)
		return (NULL);

	nodey->str = strdup(str);

	nodey->len = _strlen(str);

	nodey->next = (*head);

	(*head) = nodey;

	return (nodey);
}
