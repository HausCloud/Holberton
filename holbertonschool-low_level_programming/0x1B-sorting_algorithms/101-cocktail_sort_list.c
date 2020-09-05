#include "sort.h"

/**
 * swap_city - swap nodes when moving forwards
 * @ptr1: pointer to address of p1
 * @ptr2: pointer to address of p2
 * Return: none
 */

void swap_city(listint_t **ptr1, listint_t **ptr2)
{
	if ((*ptr1)->next != NULL)
		(*ptr1)->next->prev = (*ptr2);
	if ((*ptr2)->prev != NULL)
		(*ptr2)->prev->next = (*ptr1);
	(*ptr1)->prev = (*ptr2)->prev;
	(*ptr2)->next = (*ptr1)->next;
	(*ptr1)->next = (*ptr2), (*ptr2)->prev = (*ptr1);
	(*ptr1) = (*ptr2);
	(*ptr2) = (*ptr2)->prev;
}

/**
 * swap_town - swap nodes when moving backwards
 * @ptr1: pointer to address of p1
 * @ptr2: pointer to address of p2
 * Return: none
 */

void swap_town(listint_t **ptr1, listint_t **ptr2)
{
	if ((*ptr1)->prev != NULL)
		(*ptr1)->prev->next = (*ptr2);
	(*ptr2)->next->prev = (*ptr1);
	(*ptr1)->next = (*ptr2)->next;
	(*ptr2)->prev = (*ptr1)->prev;
	(*ptr1)->prev = (*ptr2);
	(*ptr2)->next = (*ptr1);
	(*ptr1) = (*ptr2);
	(*ptr2) = (*ptr2)->next;
}

/**
 * cocktail_sort_list - sort linked list using cocktail sort algorithm
 * @list: pointer to address of linked list
 * Return: none
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *p1 = (*list), *p2 = (*list);
	int l_l = 0, flag, count, boo1 = 0;

	if ((list) == NULL || (*list) == NULL)
		return;
	while (p1 != NULL)
		l_l++, p1 = p1->next;
	if (l_l < 2)
		return;
	p1 = *list, p1 = p1->next;
	do {
		flag = 0;
		for (count = 0; count < (l_l - 1); count++)
		{
			if (p2->n > p1->n)
			{
				swap_city(&p1, &p2), flag = -1;
				if (boo1 == 0)
					(*list) = p2;
				print_list(*list);
			}
			boo1 = -1, p1 = p1->next, p2 = p2->next;
		}
		flag = 0, l_l--, p2 = p2->prev, p1 = p2->prev;
		for (count = 0; count < (l_l - 1); count++)
		{
			if (p1->n > p2->n)
			{
				swap_town(&p1, &p2), flag = -1;
				if ((*list)->prev != NULL)
					*list = (*list)->prev;
				print_list(*list);
			}
			p1 = p1->prev, p2 = p2->prev;
		}
		l_l--, p2 = p2->next, p1 = p2->next;
	} while (flag != 0);
}
