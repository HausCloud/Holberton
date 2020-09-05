#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - check whether a linked list of integers is a palindrome
 * @head: pointer to head in main function
 * Return: 1 if it is a palindrome and -1 if not
 */

int is_palindrome(listint_t **head)
{
	listint_t *ptr = *head;
	int *arr, list_length = 0, index = 0, half;

	if (head == NULL || *head == NULL)
		return (0);

	while (ptr != NULL)
		ptr = ptr->next, list_length += 1;
	ptr = *head;
	arr = malloc(sizeof(int) * list_length);
	if (arr == NULL)
		return (-1);
	while (ptr != NULL)
		arr[index] = ptr->n, ptr = ptr->next, index++;
	index = 0;
	if ((list_length % 2) != 0)
		half = ((list_length - 1) / 2);
	else
		half = (list_length / 2) - 1;

	while (arr[index] == arr[list_length - 1] && half > 0)
	{
		index++, list_length--, half--;
		if (half == 0)
		{
			free(arr);
			return (1);
		}
	}
	free(arr);
	return (0);
}
